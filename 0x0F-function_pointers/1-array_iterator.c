#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - unction that executes a function given
 * as a parameter on each element of an array
 * @array: the array of function
 *@size: the size of the array
 * @action: function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != 0 && action != NULL)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			/* code */
			action(array[i]);
		}

	}
}
