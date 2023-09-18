#ifndef MAIN_H //if main.h is not defined, define it
#define MAIN_H
#include<stdarg.h> //the header files to be used in the printf.c is called in this header file
#include<string.h>
#include<unistd.h>

int _printf(const char *format, ...);
int binary (int num);
int octal(int num);



#endif
