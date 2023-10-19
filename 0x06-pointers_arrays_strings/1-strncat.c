#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: most number of bytes from @src
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n);
{
	int c, i;

	c = 0;
	while (dest[c])
		c++

			for (i = 0; i < n && src[i] != '\0'; i++)
				dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
