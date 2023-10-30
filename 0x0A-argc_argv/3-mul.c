#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplcation of two number
 * @argc: int
 * @argv: char vector
 * @a: int
 * @b: int
 * @sum: multiplcation
 * Return: 1 (success), 0 if not
*/
int main(int argc,char *argv[])
{
	int sum;

	if(argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
		printf("erorr\n");
	return (1);
}
