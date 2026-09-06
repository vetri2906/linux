to compile :
kernel module directory = /lib/modules/$(uname -r)

make -C <kernel directory> M=$PWD modules

make -C /lib/modules/$(uname -r)/build M=$PWD modules



