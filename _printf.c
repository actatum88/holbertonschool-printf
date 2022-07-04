#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: the first parameter
 *
 * Return: number of printed char
 */

int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list ap;

	form_t form[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
		{"i", print_i},
		{"d", print_i},
		{NULL, NULL}
	};

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);

	for (i = 0; format[i] != '\0'; i++)
	{
loop:
		if (format[i] == '%') /* triggers format scan */
		{
			for (j = 0; form[j].f != NULL; j++) /* scans formats */
			{
				if (format[i + 1] == form[j].c[0]) /* matches the identifier to function */
				{
					count += form[j].f(ap); /* triggers the format function */
					i += 2; /* skips the format identifiers */
					goto loop; /* covers edge case of back to back formats */
				}
			}
		}
		_putchar(format[i]);
		count += 1;
	}
	va_end(ap);
	return (count);
}
