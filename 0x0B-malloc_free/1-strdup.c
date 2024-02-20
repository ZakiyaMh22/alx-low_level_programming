#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails,
 * the function returns NULL.
 * Otherwise, it returns a pointer to the duplicated string.
*/

char *_strdup(char *str)
{
	int i, len = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_str = (char *)malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
