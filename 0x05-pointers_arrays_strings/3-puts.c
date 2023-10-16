#include "main.h"
/**
 * puts - prints every character of string
 * @str: string parameter input
*/
void puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
		_putchar('\n');
}
