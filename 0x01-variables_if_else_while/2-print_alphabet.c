#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
