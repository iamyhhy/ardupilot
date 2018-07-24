#!/bin/bash

# this sscript is to:
# 1. run the original mission
# 2. serilize the data and kill the mission at a random interception
# point, get the GPS of this random interception point
# 3. restart a new process(but the same copter code) but starting at the interception point,
# before taking off, deserialize the data, then take off till mission
# ends.

NUM=200

for ((i=1;i <= $NUM;i++));
do
    echo $i
    
    #run the baseline mission from the beginning:
    # start ardupilot
    gnome-terminal -e "bash -c \"./run.sh base\""
    sleep 20
    # let the mission run and kills it at a random point, record the
    # current mission completion status and time cost, also generated
    # the serialized.data file, get the GPS of the interception point
    echo "first simulation has started..."
    python ./ardu_ctrl/run_random_stop.py >& ./ardu_ctrl/baseline1/run_1_$i.txt &
    sleep 60
    echo "first simulation is killed at a random GPS location..."
    data_file="serialized.data"
    if [ -e "$data_file" ]
    then
        echo "$data_file found"
        echo "killing the simulation..."
        #kill everything
        for j in `ps -aux | grep -i ardu | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i mavpro | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i sim_vehicle | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i run_random_ | awk '{print $2}'`; do kill -9 $j; done
    
    
    
        #restart the simulation but starting from the GPS of the
        #interception point
        gps="$(python ./ardu_ctrl/run_restart_from_intercept.py 1),103" 
    
        echo $gps
        cp $data_file ./ardu_ctrl/baseline1/serialize_data/"$i"_$data_file
    

        echo _"$gps"_

        #gnome-terminal -e "bash -c \"./run.sh base_i $gps\"">& ./ardu_ctrl/baseline1/sim_log_"$i".txt &
        gnome-terminal -e "bash -c \"./run.sh base_i $gps\"" &
        sleep 20

        echo "new simulation has started..."
        
        #deserialize and start the simulator
        python ./ardu_ctrl/run_after_intercept.py >& ./ardu_ctrl/baseline1/run_2_$i.txt &

        sleep 60

        # kill leftovers
        for j in `ps -aux | grep -i ardu | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i mavpro | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i sim_vehicle | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i run_after_ | awk '{print $2}'`; do kill -9 $j; done
        # remove all files from this iteration
        rm ./serialized.data
    else
        echo -e "fail\nserialized.data not found">./ardu_ctrl/baseline1/run_2_$i.txt
        for j in `ps -aux | grep -i ardu | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i mavpro | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i sim_vehicle | awk '{print $2}'`; do kill -9 $j; done
        for j in `ps -aux | grep -i run_random_ | awk '{print $2}'`; do kill -9 $j; done
       
    fi
done




