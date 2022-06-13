#include "main.h"
#include "_putchar.c"

/**
 * _puts - prints a string to std output
 * @str: pointer to string to print
 * _putchar: print string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
