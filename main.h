#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD

=======
#include <limits.h>
#include <unistd.h>
#include "_putchar.c"
>>>>>>> e90015a3b2e583bb5bfc376032e4e1c2d9b46e8b

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

#include "get_print_func.c"
#include "print_buf.c"
#include "handl_buf.c"

int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);

#endif
