#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: character
 * Return: 0 if false or 1 if true
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
