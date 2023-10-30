#include <stdio.h>

/**
 *  main - program that prints its name, followed by a new line
 *  @argc: int it account a number of element in the program
 *  @argv: char vector
 *  Return: Null
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
		printf("sorry, try again later");
	return (0);
}
