#include "main.h"

/**
 * print_i - prints an int or a double
 * @ap: argument to print
 * Return: number of characters printed
 */

int print_i(va_list ap)
{
	int n = va_arg(ap, int);
	int div = 1;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		count += _putchar('0' + (n / div));
		n %= div;
		div /= 10;
	}
	return (count);
}
