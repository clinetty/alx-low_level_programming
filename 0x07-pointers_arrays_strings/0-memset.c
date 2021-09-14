#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}