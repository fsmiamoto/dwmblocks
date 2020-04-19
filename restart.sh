#!/bin/sh

sudo make clean install
pkill dwmblocks
dwmblocks & disown
