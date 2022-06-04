#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 20));

	if ((n % 20) > 5)
	{
		printf("is greater than 5\n");
	}
	elseif ((n % 20) == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("is less than 6 and not 0\n");
	}

	return (0);
}
