#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void);
{
	int i;
	char c;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while  (c <= 'z');
		{
			_putchar(c);
			c++;
		}

		_putchar(i);
		i++;
	}
}
