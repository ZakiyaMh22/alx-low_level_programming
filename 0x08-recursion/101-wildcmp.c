#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard pattern matching.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == '\0' || *s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}

