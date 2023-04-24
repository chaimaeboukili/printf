#include "main.h"
/**
 * _printf - prints according to format
 * @format: The given format
 *
 * Return: On success 1.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, length = 0;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(list, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				length += get_print_func(format[i + 1], list);
				i++;
			}
			else
				length += _putchar(format[i]);
		}
	va_end(list);
	return (length);
}
