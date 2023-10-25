#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to print string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int root;

	if (*s > '\0')
	{
		root += _strlen_recursion(s + 1) + 1;
	}
	return (root);
}
