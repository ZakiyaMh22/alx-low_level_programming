#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(c[i]);
		}
	}
	putchar('\n');
	return (0);
}
