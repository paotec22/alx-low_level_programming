#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
	char c;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c / 10 > 0)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
