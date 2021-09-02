#include "main.h"

/**
 * more_numbers : prints 10 times the numbers from o to 14 followed by new line
 *
 * returns nothing
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}
