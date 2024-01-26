#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - unction that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *current_string;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		current_string = va_arg(args, char *);

		if (current_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_string);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
