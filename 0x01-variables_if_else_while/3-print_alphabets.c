#include <stdio.h>

/**
 *main - print uppercase and lowercase A-Z a-z with putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z') /*print lowerCase a-z*/
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z') /*print upperCase A-Z*/
	{
		putchar(upperCase);
		lowerCase++;
	}

	putchar('\n');

	return (0);
}
