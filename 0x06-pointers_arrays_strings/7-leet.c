#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @a: pointer to string
 *
 * Return: pointer to a
 */

char *leet(char *a)
{
	int i = 0;
       	while (a[i] != '\0')
	{
		if (a[i] == 'a' || a[i] == 'A')
				a[i] = '4';
		else if (a[i] == 'e' || a[i] == 'E')
				a[i] = '3';
		else if (a[i] == 'o' || a[i] == 'O')
				a[i] = '0';
		else if (a[i] == 't' || a[i] == 'T')
			a[i] = '7';
		else if (a[i] == 'l' || a[i] == 'L')
			a[i] = '1';
			i++;
	}

	return a;
}
