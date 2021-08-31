#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <26; j++)
		{
			_puchar(c + j);
		}

		_putchar(10);
	}
}
