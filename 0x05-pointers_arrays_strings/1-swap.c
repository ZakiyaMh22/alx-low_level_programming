#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * 		using two inpt parameters
 *
 * @n: input parameters 1
 * @n: input parameters 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
