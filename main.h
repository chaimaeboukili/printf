#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct format - match the conversion specifiers for printf
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *format;
	int (*f)(va_list list);
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int get_print_func(char identifier, va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_porcent(va_list list);
int print_integer(va_list list);
int print_base2(unsigned int n, int length);
int print_binary(va_list list);
int print_unsig(va_list list);
int print_base8(unsigned int n, int length);
int print_octal(va_list list);
int print_base16min(unsigned int n, int length);
int print_min_hexa(va_list list);
int print_base16(unsigned int n, int length);
int print_hexa(va_list list);
int print_Rot13(va_list list);
int print_rev(va_list list);

#endif
