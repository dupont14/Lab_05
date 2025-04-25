#!/bin/bash
echo "compiling code"
config-pin p8.16 gpio_pu
config-pin p9.12 gpio
g++ -Wall GPIO.cpp gpioApp.cpp -o GPIOToggle -pthread
echo "done compiling"

