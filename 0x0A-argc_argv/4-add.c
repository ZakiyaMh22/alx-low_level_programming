#include <stdio.h>

/**
 * main - program that adds positive numbers
 * @argc: int number of argument
 * @argv: char array of pointer to argument
 * Return: Null
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Erorr\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

