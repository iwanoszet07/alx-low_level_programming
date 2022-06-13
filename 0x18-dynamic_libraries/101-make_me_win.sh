#!/bin/bash
wget -P /lib https://github.com/iwanoszet07/alx-low_level_programming/blob/main/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/lib/putshack.so
