#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int j;

		j = 0;
		while (j < 52)
		{
		putchar(c[j]);
		j++;
		}
		putchar('\n');
		return (0);
}
