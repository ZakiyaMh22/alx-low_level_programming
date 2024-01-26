#include <stdio.h>
#include <stdlib.h>
void print_opcodes(char *a, int n);

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, n);
	return (0);
}
/**
 * print_opcodes - print the opcodes of the program
 * @a: address of the main function
 * @n: number of byte to print
 * Return: void
*/
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%02hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

