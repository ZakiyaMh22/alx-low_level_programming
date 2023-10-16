#include "main.h"
/**
 * puts2 - prints every character of string
 * @str: string parameter input
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
		_putchar('\n');
}
