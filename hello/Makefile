obj-m += hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

#TODO: This doesn't actually install anything
install:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules_install
