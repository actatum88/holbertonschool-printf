# holbertonschool-printf
_printf is a very basic and custom version of the printf function in C. Created for the purpose of utilizing the skills learned so far in the course at Holberton Schools.

Prototype: ``int _printf(const char *format, ...);``

## Tasks
### Write a function that produces output according to a format.
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* You need to handle the following conversion specifiers:
    * c
    * s
    * % 
 ### Handle the additional following conversion specifiers:
 * d
 * i
### Create a man page for your function.

## Examples
* ``%c`` format: ```_printf("Character:[%c]\n", 'H');```
  * output: ``Character:[H]``
* ``%s`` format: ```_printf("String:[%s]\n", "I am a string !"]);```
  * output: ``String:[I am a string !]``
* ``%%``format: ```_printf("Percent:[%%]\n");```
  * output: ``Percent:[%]``
* ``%i`` format: ```_printf("Negative:[%i]\n", INT_MIN);```
  * output: ``Negative:[-2147483648]``
* ``%d`` format: ```_printf("Positive:[%d]\n", 762534);```
  * output: ``Positive:[762534]``

## File Descriptions
* **_printf.c** - Main function file that executes the _printf function. It utilizies the prototype: `int _printf(const char *format, ...);` It returns the number of characters printed and writes output to stdout, the standard output stream.
* **_putchar.c** - contains the _putchar function used to output characters to stdout.
* **main.h** - Header file that contains all the prototypes and the struct used to make the _printf function operational.
* **man_3_printf** - Manual file used for _printf function.
* **print_chars.c** - contains the functions that print out characters to std out which are the ``%c``, ``%s`` and ``%%`` format specifiers.
* **print_int.c** - contains the function used to print out integers to stdout which are the ``%i`` and ``%d`` format specifiers.
* **tests** - is a directory that contains test files used to test the _printf function.


## Authors
Alexandra Tatum & Conner Curtis
