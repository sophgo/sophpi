#!/bin/sh

# must execute after kmod_load.sh
hciattach ttyS1 any 1500000
# some device haven't bluetooth hardware
hciconfig hci0 up &
