#!/bin/bash
# DummyProcess.c is the name of the program that pauses itself.
# Then it dumps the memory of the program in a core file.
gcc DummyProcess.c;
ulimit -c unlimited;
sudo gcore -o DummyProcess.core "$(ps|grep "a\.out"|awk '{print$1}')";
