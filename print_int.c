#include "main.h"

/**
 * print_i - prints an int or a double
 * @ap: argument to print
 * Return: number of characters printed
 */

int print_i(va_list ap)
{
	int n = va_arg(ap, int), num = n, last = n % 10, exp = 1, dig;
	int count = 0;

	n /= 10;

	if (last < 0)
	{
		count += _putchar('-');
		num = -num;
		n = -n;
		last = -last;
	}
	if (num > 0)
	{
		for (; num / 10 != 0;)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		for (; exp > 0;)
		{
			dig = num / exp;
			if (dig != 0)
				count += _putchar(dig + '0');
			num -= (dig * exp);
			exp /= 10;
		}
	}
	count += _putchar(last + '0');
	return (count);
}
