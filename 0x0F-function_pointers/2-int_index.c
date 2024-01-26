#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * returns the index of the first element for which
 * the cmp function does not return 0
 * @array: array of numbers
 * @size: the number of elements in the array
 * @cmp: pointer to function
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
