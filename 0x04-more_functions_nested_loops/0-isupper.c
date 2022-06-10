#include "main.h"

/**
 * main - Check if char is Uppercase
 *@c: character to check
 *
 * Return: Always 1 (success), 0 (non-success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	return (0);
}
