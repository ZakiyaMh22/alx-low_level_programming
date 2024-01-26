#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that print sum of all args
 * @n: the first arg
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(list, int);
	}
	return (result);
}
