#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers
 *Return: Always 0 (Success)
 */

int main(void)
{
	int t;
	int j;

	for (t = 0; t <= 99; t++)
	{
		for (j = t + 1; j <= 99; j++)
		{
			putchar(t / 10 + '0');
			putchar(t % 10 + '0');
			putchar(j / 10 + '0');

			if (!(t == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

