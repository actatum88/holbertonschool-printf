#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @ap: argument to print
 * Return: number of characters printed
 */

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_str - prints a string
 * @ap: argument to print
 * Return: number of characters printed
 */

int print_str(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_perc - prints a %
 * @ap: unused
 * Return: number of characters printed
 */

int print_perc(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}
