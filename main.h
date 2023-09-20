#ifndef MAIN_H /* Main.h file defined */
#define MAIN_H

/* Header files */
#include<stdarg.h>
#include <stdio.h>
#include<string.h>
#include<unistd.h>

#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

/* OUR SIZE HERE */
#define LONG_STR 2
#define SHORT_STR 1

/* OUR FLAGS */
#define MINUS_FUNC 1
#define PLUS_FUNC 2
#define ZERO_FUNC 4
#define HASH_FUNC 8
#define SPACE_FUNC 16

/**
 * struct fmts - Operation formats
 * @fmts: Formats.
 * @fns: Functions.
 */
struct fmts
{
	char fmts;
	int (*fns)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmts fmt_ts - Struct op
 * @fmts: The format.
 * @fm_ts: The function associated.
 */
typedef struct fmts fmt_ts;

int _printf(const char *format, ...);
int handle_print(const char *fmts, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

/* ---------- OUR FUNCTIONS ---------- */


/* Print Funtions for chars and strings */
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],	int flags, int width, int precision, int size);

/* Print  Functions for numbers */
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int the_flags(const char *format, int *i);
int the_width(const char *format, int *i, va_list list);
int the_precision(const char *format, int *i, va_list list);
int the_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Handler */
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length, int width, int flags, char padd, char extra_c, int padd_start);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);

/* ---------- UTIL ---------- */
int printable_char(char);
long int convert_unsgnd_sizes(unsigned long int num, int size);
int digit_char(char);
int append_hexa(char, char[], int);
long int convert_size(long int num, int size);

#endif


/*
int _printf(const char *format, ...);
int binary (int num);
int octal(int num);
*/
