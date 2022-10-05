#!/bin/bash
wget -P /tmp/ https://raw.github.com/Peaceik/alx-low_level_programming.git/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
