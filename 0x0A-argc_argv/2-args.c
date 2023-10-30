#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: int count
 * @argv: char vector
 * Return: Null
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
