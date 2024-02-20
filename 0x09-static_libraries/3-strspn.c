#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length
 * of a prefix substring
 * @s: the string to be checked.
 * @accept: The string containing the characters to match.
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
