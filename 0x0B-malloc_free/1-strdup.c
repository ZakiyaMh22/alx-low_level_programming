#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string which is a duplicate of the string
 * Return: NULL if str = NULL
*/

char *_strdup(char *str)
{
	int i, size;
	char *m;

	if (str == NULL)
		return (0);

	for (; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);


	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
