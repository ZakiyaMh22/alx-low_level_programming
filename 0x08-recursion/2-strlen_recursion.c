#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to print string
 * @tni: int value
 * Return: tni int value
*/

int _strlen_recursion(char *s)
{
	int tni;

	if (*s > '\0')
	{
		tni += _strlen_recursion(s + 1) + 1;
	}
	return (tni);
}
