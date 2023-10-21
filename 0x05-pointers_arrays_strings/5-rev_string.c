#include "main.h"

/**
 * rev_string - function should print only one character out of two
 * starting with the first one
 * @s: strig parameters input
 * Return: print
*/
void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}

}
