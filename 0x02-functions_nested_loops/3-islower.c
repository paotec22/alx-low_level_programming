#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isLower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
