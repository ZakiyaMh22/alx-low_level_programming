#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return:  returned pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *ncat;
	size_t length1 = 0, length2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		/* code */
		return (NULL);
	}
	ncat = malloc(((length1 + length2 + 1)) * sizeof(char));

	strcpy(ncat, s1);
	strncat(ncat, s2, length2);
	return (ncat);
}
