#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("Character:[%c%c%c]\n", 'c', 'a', 't');
    return (len);
}
