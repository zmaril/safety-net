# Safety Net
# WIP

## Table of Contents

* [Why Safety Net?](https://github.com/zmaril/safety-net#why-safety-net)
* [Jump start](https://github.com/zmaril/safety-net#jump-start)
* [Tools](https://github.com/zmaril/safety-net#tools)
* [Examples](https://github.com/zmaril/safety-net#examples)
* [Tutorials](https://github.com/zmaril/safety-net#tutorials)
* [Acknowledgments](https://github.com/zmaril/safety-net#acknowledgments)
* [Contact](https://github.com/zmaril/safety-net#tcontact)

## Why Safety Net?

Writing code that interacts with the internals of the Linux kernel is scary. I'm
always worried I will crash my kernel in such a way that I'll waste my precious
free time fixing my mistakes. I avoid the crazy but interesting ideas I have
about kernel stuff because I don't want to risk torching my kernel. And I have
no interest in writing device drivers for Linux, so much of the documentation
and examples I can find are not that useful to me.

But! It doesn't have to be this way! 

This repository documents my efforts at making Linux kernel module development
safer and more interesting (to me at least). I think that by providing simple
examples that can be immediately run by anyone on any computer, Linux kernel
modules can be understood and developed by more people to do some interesting
things. This document is aimed at folks who know a little C, want to start
learning about the internals of the Linux kernel and want to make the kernel do
weird shit.

Obviously this is a work in process that will never be finished. Leave an issue
if there is a mistake or you have something you think should be in here. My goal
is to make this the thing I wish I had found when I first started getting
interested in what the Linux kernel actually is and does.

### Why Virtualbox/Vagrant?

Virtualbox is a hypervisor, which is a fancy way of saying that virtualbox is a
program that tricks operating systems into thinking they are running on a real
computer when they are actually just running inside another operating system.
Vagrant uses Virtualbox to make it easy to set up a virtual machine (the
operating system that is being tricked) exactly the way you want it. We are
using these types of technologies because a major mistake in a virtual machine
is a minor annoyance, while a major mistake normally might require you to
reinstall your kernel. We are using Virtualbox and Vagrant because they are
particularly easy to set up, have excellent documentation and can be installed
on most operating systems.

### Why Linux kernel modules?

## Jump start

##  Tools

### `lsmod`

### `insmod`

### `modprobe`

### `rmmod`

### `modinfo`

### `systool`

### `dmesg`

## Tutorials

* ["An introduction to Linux kernel programming" by Crash Course](http://www.crashcourse.ca/introduction-linux-kernel-programming/introduction-linux-kernel-programming)
* ["The Linux Kernel Module Programming Guide" by Peter Jay Salzman et al.](http://www.tldp.org/LDP/lkmpg/2.6/html/index.html)

## Blog posts

* Julia Evans

## Ideas to try

* strace from the inside
* print every system call


## Acknowledgments

Huge props to [Julia Evans](http://jvns.ca/about/) for being super excited about
kernels a few years ago and writing up a bunch of stuff.
[Tim Ball](https://twitter.com/timball) and
[Paul Tagliamonte](https://twitter.com/paultag) answered so many of my dumb
questions so well time and time again, it's astounding. Oracle and Hashicorp
made all this technologically possible. And of course, the legion of developers
who gave us the Linux kernel in the first place.

## Contact

[Github issues](https://github.com/zmaril/safety-net/issues) are the best way to
talk to me about the stuff in this repository.
[Twitter](https://twitter.com/zackmaril) also works. My email,
[zack@zacharymaril.com](mailto:zack@zacharymaril.com), is a good way to contact
me about anything else.

## Scratch (ignore)
http://www.unixwiz.net/techtips/reading-cdecl.html
https://www.eskimo.com/~scs/cclass/int/sx8.html
i
