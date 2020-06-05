## Setup
Linux is the easiest system to setup environments for C development 
```
sudo apt-get install build-essentials 
```
>The build-essentials package is a reference for all the packages needed to compile a Debian package. It generally includes the GCC/g++ compilers and libraries and some other utilities. So if you need to install C/C++ compiler, you just need to install build-essential package on your machine. And the build-essential is a metapackage that installs many other packages, like G++, GCC, dpkg-dev, make,etc.

**GCC GNU C Compiler**

**g++ GNU C++ Compiler**

That's all we need to install. To see what compilers was installed. 
```
cc --version
```

## Hello world
```
#include <stdio.h>

int main(int argc, char *argv[])
{
	int year = 2020;
	printf("Hello Year 2020");

	return 0;
}
```
Then to build the code we will use a tool named **make**. 
```
make hello.c
```
this will generate a executables named hello. To run the executables 
```
./hello
```
> in linux, . denotes current directory, so ./ is used to tell the shell where the executable is. Means run the executable in current directory. 

## How Makefile works:
Makefile is a tool to simplify or to organize code for compilation. Makefile is a set of commands (similar to terminal commands) with variable names and targets to create object file and to remove them. 
When you run make command, The program automatically assumes there’s a file called Makefile and will just run it.