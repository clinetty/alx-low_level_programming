#include "main.h"

/**
 * print_numbers : prints numbers frrom 0 - 9
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar("%d", i);
		_putchar("\n");
	}
}
