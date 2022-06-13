#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: character to getstring
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '0')
	{
		i++;
	}
	return (i);
}
