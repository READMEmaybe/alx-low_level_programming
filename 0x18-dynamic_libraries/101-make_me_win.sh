#!/bin/bash
wget -P /tmp https://github.com/READMEmaybe/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libInj.so
export LD_PRELOAD=/tmp/libInj.so