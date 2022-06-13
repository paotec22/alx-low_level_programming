#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: character to getstring
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}

	return (i);
}
