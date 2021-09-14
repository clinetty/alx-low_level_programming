#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to work on
 * @accept: pattern to match against
 * Return: unsigned int to how many initial bytes match the pattern
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
