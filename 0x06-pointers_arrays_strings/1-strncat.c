#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string appended to
 * @src: string to append
 * @n: no of bytes
 * Return: a pointer to the resuslting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
