#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		purchar(alpha);
		alpha--;
	}
	purchar('\n');

	return (0);
}
