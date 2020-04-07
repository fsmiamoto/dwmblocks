# dwmblocks
My build of the modular status bar for dwm written in C.

The status bar is made up from text output from command-line programs.

You can use the output of shell scripts or programs as a block with adding added properties such as an icon, update interval and a signal number.

## Adding or modifying blocks
Blocks are added and removed by editing the `blocks.h` header file.

After that remember to re-compile it:
```sh
# Install the changed version
$ sudo make clean install

# Terminate old versions running
$ killall dwmblocks

# Run it, detaching it from the shell
$ dwmblocks & disown
```
## Signaling a block

If you specified a signal number you can signal a block by using `pkill` for example:
```sh 
# Update block with signal 10
$ pkill -RTMIN+10 dwmblocks
```

