#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - unction returns a pointer to the duplicated string
 *
 * @str: string which is a duplicate of the string
 *
 * Return: returns a pointer
*/
char *_strdup(char *str)
{
	char *duplicate;
	size_t len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc((len + 1) * sizeof(char));

		if (duplicate == NULL)
		{
			perror("Failed to allocate memory");
			return (NULL);
		}

	strcpy(duplicate, str);

	return (duplicate);
}
