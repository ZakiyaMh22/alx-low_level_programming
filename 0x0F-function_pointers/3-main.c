#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 for wrong number of arguments,
 *         99 for invalid operator, 100 for division/modulo by 0
 */
int main(int argc, char **arg)
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_fun = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	if ((!b && argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(a, b));

	return (0);
}

