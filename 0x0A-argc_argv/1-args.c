#include <stdio.h>

/**
 *  main - prints the number of arguments passed into it
 *  @argc: int count
 *  @argv: char vector
 *  Return: Null
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("argv [%d] = %d\n", count, argc);
	}
	return (0);
}
