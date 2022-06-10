#include "main.h"

/**
 * print_most_numbers - print from 0 - 9 but not 2 or 4
 * Return: 0
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c = '0' && c <= '9' && c != '2' && c != '4')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
