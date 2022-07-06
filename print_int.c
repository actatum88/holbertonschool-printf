#include "main.h"
#include <limits.h>

/**
 * print_i - prints an int or a double
 * @ap: argument to print
 * Return: number of characters printed
 */

int print_i(va_list ap)
{
	long int n = va_arg(ap, int);
	int div = 1;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	while (n / div > 9)
		div *= 10; /* this sets div = to the highest placed int */
	while (div != 0)
	{
		count += _putchar('0' + (n / div)); /* this prints the highest placed int */
		n %= div; /*moves n down a to the next highest placed int */
		div /= 10; /* moves div down to the next highest placed int */
	}
	return (count);
}
