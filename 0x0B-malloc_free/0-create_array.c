#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: the char of file in array
 * Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
	{
		return NULL;
	}
	n = malloc(size * sizeof(char));
	if (n == NULL)
	{
		/* code */
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		/* code */
		n[i] = c;
	}
	return (n);
}
