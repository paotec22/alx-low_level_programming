#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char c = 0;

	while (c <= 10)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
