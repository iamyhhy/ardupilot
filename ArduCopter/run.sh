#!/bin/bash

# run the SITL of Copter (map, console)
TEST=$1
GPS=$2
case $TEST in
    wp) 
    python ../Tools/autotest/sim_vehicle.py -l 37.9941253662109375,-78.39752197265625,99.7299957275390625,180  -w --console --map -C
    ;;

    # baseline run with home
   base) 
   python ../Tools/autotest/sim_vehicle.py -l 37.994125,-78.397521,99.7299957275390625,180  -w --console  -C -S 10
   ;;

    #baseline run starting from the interception point
    base_i) 
    python ../Tools/autotest/sim_vehicle.py -l $GPS  -w --console -C -S 10
    ;;

    com) 
    python ../Tools/autotest/sim_vehicle.py -l 42.264365,-83.744354,99.7299957275390625,180  -w --console  -C -S 10
    ;;
   
    com_i) 
    python ../Tools/autotest/sim_vehicle.py -l $GPS  -w --console  -C -S 10
    ;;
    try) 
    python ../Tools/autotest/sim_vehicle.py -l 42.269587,-83.743371,109.01,180  -w --console --map -C
    ;;

    #mission_test.txt
    #mission_test with home
    test) 
    python ../Tools/autotest/sim_vehicle.py -l 37.994125,-78.397521,109.01,180  -w --console --map -C
    ;;

   # mission_test with the interception point
   test_i) 
   python ../Tools/autotest/sim_vehicle.py -l 37.9939006,-78.3977038,109.01,180  -w --console --map -C
   ;;


    run)
    python ../Tools/autotest/sim_vehicle.py -w --console --map -C
    ;;

    *)
    echo "Argument is not right:$TEST"
    ;;
esac

