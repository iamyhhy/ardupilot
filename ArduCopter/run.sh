#!/bin/bash

# run the SITL of Copter (map, console)
TEST=$1

case $TEST in
    wp) 
    python ../Tools/autotest/sim_vehicle.py -l 37.9941253662109375,-78.39752197265625,99.7299957275390625,180  -w --console --map -C
    ;;

    test) 
    python ../Tools/autotest/sim_vehicle.py -l 37.993902,-78.3977318,99.729995727539062,109  -w --console --map -C
    ;;
    run)
    python ../Tools/autotest/sim_vehicle.py -w --console --map -C
    ;;

    *)
    echo "Argument is not right:$TEST"
    ;;
esac

