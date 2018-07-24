#!/bin/bash

# this sscript is to:
# 1. run the original mission till it ends
# measure:
#how long it takes to finish the mission (excluding take-off time)


# data is stored at : ./baseline0/

NUM=200

for ((i=38;i <= $NUM;i++));
do
    echo $i

    gnome-terminal -e "bash -c \"./run.sh com\"" &

    sleep 20
    python ./ardu_ctrl/run_uts.py > ./ardu_ctrl/uts0/run_$i.txt &

    sleep 1500



	# kill leftovers
	for j in `ps -aux | grep -i ardu | awk '{print $2}'`; do kill -9 $j; done
	for j in `ps -aux | grep -i mavpro | awk '{print $2}'`; do kill -9 $j; done
	for j in `ps -aux | grep -i sim_vehicle | awk '{print $2}'`; do kill -9 $j; done


done


