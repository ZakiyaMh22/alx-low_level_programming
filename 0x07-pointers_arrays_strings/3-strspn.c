#include "main.h"

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
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
		accept -= count;
	}

	return (count);
}
