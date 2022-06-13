#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: is first integer
 * @b: is second integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}


