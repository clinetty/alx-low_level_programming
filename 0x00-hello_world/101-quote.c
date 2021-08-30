#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - a C program that prints w/o using printf or puts
 * Return: 1
 */
int main(void)
{
	int s;

	s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      s);
	return (1);
}
