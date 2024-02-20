#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the bytes to search for.
 *
 * Return: a pointer to the byte in s that
 * matches one of the bytes in accept,
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}

	return (NULL);
}
