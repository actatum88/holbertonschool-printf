#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct form - struct for specifiers
 * @c: specifier to print
 * @f: specifier function to execute
 */

typedef struct form
{
	char *c;
	int (*f)(va_list);
} form_t;

int _printf(const char *format, ...);
int _putchar(int c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_perc(__attribute__((unused))va_list ap);
int print_i(va_list ap);
int print_d(va_list ap);

#endif
