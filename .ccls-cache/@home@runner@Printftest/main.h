#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

#define DEFAULT 0
#define UPPER 1
#define LOWER 2

/*-------structs---------*/
typedef struct fmt
{
	char c;
	int (*action_func)(va_list);
} fmt_t;

/*-----------function_prototypes-----------*/
int _printf(const char *, ...);
int (*fetch_func(char))(va_list);
int unknown(const char *);
int _putchar(char);
int _print_digit(long num, int base, ...);

/*---------action_functions-----------*/
int print_char(va_list);
int print_str(va_list);
int print_pcnt(va_list);
int print_digit(va_list);
int print_hex(va_list);
int print_hex_caps(va_list);
int print_oct(va_list);
int print_unsigned(va_list);
int print_custom_str(va_list);
int print_addr(va_list);


/*-------------action_func_2----------*/
int int_binary(va_list);
int str_rev(va_list);
int printf_rot13(va_list);


#endif /*MAIN_H*/
