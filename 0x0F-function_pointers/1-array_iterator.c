#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array of int
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (*action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}
