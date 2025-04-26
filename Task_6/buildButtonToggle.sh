#!/bin/bash
echo "compiling code"
config-pin p9.30 gpio_pu
config-pin p9.12 gpio
g++ -Wall GPIO.cpp buttonLED.cpp -o GPIOToggle -pthread
echo "done compiling"

