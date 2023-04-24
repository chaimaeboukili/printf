#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include "_putchar.c"

/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;


int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);
#include "get_function.c"
#include "print_char.c"
#include "print_string.c"
#include "print_digit.c"
#include "print_rev_string.c"
#include "print_mod.c"


#endif
