#include "main.h"

/**
 * _memset - library function with conest byet
 * @s : is pointer to put te constant
 * @b: conestant
 * @n: the max byet
 * Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int root;

	for (root = 0; n > 0; root++, n--)
	{
		s[root] = b;
	}
	return (s);
}
