#!/bin/bash

echo "starting the script"
echo out >> /sys/class/gpio/gpio60/direction
config-pin P9_12 gpio
g++ makeLED.cpp -o makeLED
g++ offLED.cpp -o offLED
echo "done compiling"
