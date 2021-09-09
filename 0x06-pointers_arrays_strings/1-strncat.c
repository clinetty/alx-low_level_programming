#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string appended to
 * @src: string to append
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0'&& y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
