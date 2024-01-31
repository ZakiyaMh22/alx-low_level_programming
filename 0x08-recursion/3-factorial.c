#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which factorial is to be calculated.
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

