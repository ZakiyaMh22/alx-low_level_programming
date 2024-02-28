#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, otherwise 1.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, num;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

