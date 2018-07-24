#!/bin/bash

# this sscript is to:
# 1. run the original mission till it ends
# measure:
#how long it takes to finish the mission (excluding take-off time)


# data is stored at : ./baseline0/

NUM=70

for ((i=1;i <= $NUM;i++));
do
    echo $i

    gnome-terminal -e "bash -c \"./run.sh base; exec bash\""

    sleep 20
    python ./ardu_ctrl/run.py > ./ardu_ctrl/baseline0/run_$i.txt &

    sleep 60



	# kill leftovers
	for j in `ps -aux | grep -i ardu | awk '{print $2}'`; do kill -9 $j; done
	for j in `ps -aux | grep -i mavpro | awk '{print $2}'`; do kill -9 $j; done
	for j in `ps -aux | grep -i sim_vehicle | awk '{print $2}'`; do kill -9 $j; done


done


