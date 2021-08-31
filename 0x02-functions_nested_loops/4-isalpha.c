#include "main.h"

/**
 * _islower - checks for alphabetic character.
 *
 * @c: char type letter
 *
 * Return: 1 if c is letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
        if ((c >= 65 && c <= 91) || (c >=97 && c <= 123))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
