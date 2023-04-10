# C Static and Dynamic Libraries

## Requirements
- Language: C
- Compiler: gcc
- Operating System: Linux
- Style Guidelines: Betty Style

## Overview
This repository contains several C programming language projects completed during ALX training. The projects focus on enhancing coding skills and improving understanding of concepts related to C programming, particularly the creation and usage of static and dynamic libraries.
The repository aims to impart knowledge of the following concepts:


- What a static library is.
- How it works.
- How to create a static library using the ar command.
- How to use a static library.

## Definitions and Usage

A static library is a collection of object files that are combined into a single file for use in a program. The library can be linked directly into the program, avoiding the need for the program to load the library dynamically at runtime.


## How It Works

When you create a static library, the object files are combined into a single file using the ar command. The library is then indexed using the **ranlib** command, which creates a table of contents for the library. This table of contents enables the linker to quickly find the desired functions when linking the program.

The **nm** command can be used to view the contents of a static library. This command lists the symbols (i.e., functions and variables) defined in the library and their addresses.

When you compile your program, you specify the static library to link with using the ``-l`` flag followed by the name of the library file (without the .a extension). For example, if your library is named **libmylib.a**, you would link it into your program using the following command:


```gcc -o myprogram myprogram.o -L. -lmylib```


This command tells the linker to look for ``libmylib.a`` in the current directory **(-L.)** and to link it **(-lmylib)** with **myprogram.o** to create an executable named **myprogram**.


## Creating a Static Library

To create a static library, you first need to compile the source files into object files. You can do this using the ``gcc`` command with the ``-c`` flag. For example, to compile ``foo.c`` into an object file named foo.o, you would use the following command:


```gcc -c foo.c -o foo.o```

Once you have compiled all of your source files into object files, you can combine them into a single library using the ar command. For example, to create a library named `libmylib.a` from the object files `foo.o` and `bar.o`, you would use the following command:


```ar rcs libmylib.a foo.o bar.o```

This command creates a static library named `libmylib.a` and adds the object files `foo.o` and `bar.o` to it.

After creating a library, you should index it using the ``ranlib`` command. This command creates a table of contents for the library, which enables the linker to quickly find the desired functions when linking the program. To index libmylib.a, you would use the following command:


```ranlib libmylib.a```


## Using a Static Library

To use a static library, you need to link it with your program at compile time. To do this, you specify the library name using the `-l` flag followed by the name of the library file (without the `.a` extension). For example, to link `myprogram.o` with `libmylib.a`, you would use the following command:


```gcc -o myprogram myprogram.o -L. -lmylib```

This command tells the linker to look for `libmylib.a` in the current directory `(-L.)` and to link it `(-lmylib)` with `myprogram.o` to create an executable named `myprogram`.

You can now run `myprogram` by typing `./myprogram` at the command prompt.

## Dynamic Libraries

Dynamic libraries are similar to static libraries, except they are not copied into the executable program. Instead, they are loaded into memory at runtime and shared among multiple processes. This means that multiple programs can use the same dynamic library, reducing the amount of disk space required by the programs and making it easier to update the library without recompiling all the programs that use it.

To create a dynamic library, we can use the `-shared` flag with `gcc`:


```
gcc -shared -o libmylib.so file1.o file2.o
```

This creates a shared object file `libmylib.so` from the object files `file1.o` and `file2.o` We can then link our program to this shared library by including it during compilation:

```
gcc -o myprogram myprogram.c -L. -lmylib
```

The `-L` flag tells the linker to look for the shared library file in the current directory, and the `-lmylib` flag tells it to link to a library named libmylib.so.

To run the program, we need to tell the system where to find the shared library by setting the `LD_LIBRARY_PATH` environment variable:

```
export LD_LIBRARY_PATH=.
./myprogram
```

This tells the system to look for shared libraries in the current directory.

**Dynamic libraries** have the advantage of being smaller in size and more flexible than static libraries, but they have a slightly slower startup time due to the need to load the library into memory.


## Files

The following files are included in this repository:

- **libmy.a**: A static library containing various functions.
- **main.h**: A header file with function prototypes used in the library.
- **create_static_lib.sh**: A shell script used to compile the library and create a static version.

## Author

The author of this repository is Mohammed Abba.

## License

ALX.
