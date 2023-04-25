#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */

int print_string(va_list args)
{
	char *s;
	int i, lenth;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		lenth = _strlen(s);
		for (i = 0; i < lenth; i++)
			_putchar(s[i]);
		return (lenth);
	}
	else
	{
		lenth = _strlen(s);
		for (i = 0; i < lenth; i++)
			_putchar(s[i]);
		return (lenth);
	}
}

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
