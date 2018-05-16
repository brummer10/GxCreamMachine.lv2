# GxCreamMachine.lv2
Simulation, based on a tube power amp circuit 


![GxCreamMachine](https://raw.githubusercontent.com/brummer10/GxCreamMachine.lv2/master/GxCreamMachine.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxCreamMachine:

- libc6-dev
- libgtk2.0-dev
- libstdc++6-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

