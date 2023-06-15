

This command compiles the C file `filename.c` and generates an executable named `output`.

## Default Program Name

When compiling with gcc, the default program name is `a.out` if you don't specify an output file name using the `-o` option.

## Official C Coding Style and Betty

The official C coding style is defined in the "C Programming Language" book by Brian Kernighan and Dennis Ritchie. To check your code against the official C coding style, you can use `betty-style`, a tool that analyzes your code for style compliance.

## Including Standard Library Headers

To use standard library functions in your source code, you need to include the appropriate header file that declares those functions. For example, to use `printf`, you need to include the `<stdio.h>` header.

## Main Function and Program Return Value

The `main` function in C serves as the entry point of a program and influences the return value. By convention, a return value of 0 indicates successful program execution, while a non-zero value indicates an error or abnormal termination.

