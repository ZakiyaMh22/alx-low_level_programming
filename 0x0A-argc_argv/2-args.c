#include <stdio.h>
/**
 * main - entery point
 * @argc: int
 * @argv: list
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	int i;
	(void)argv;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

