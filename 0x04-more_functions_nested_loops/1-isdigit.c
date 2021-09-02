#include "main.h"

/**
 * int _isdigit : check for a digit 0 through 9
 *
 * returns 1 if c is a digit
 *
 * returns 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
