#include "main.h"

/**
 * _strchr - library function with const byte
 * @s: pointer put the const
 * @c: const
 * Return: pointert to s
*/

char *_strchr(char *s, char c);
{
	int arry;

	for (arry = 0; s[arry] >= '\0' ; arry++)
	{
		if (s[arry] == c)
		{
			return (s + arry);
		}
	}
	return ('\0');
}
