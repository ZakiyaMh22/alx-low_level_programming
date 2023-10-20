#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description:IL odd number of char,print (length - 1)/2
*/

void puts_half(char *str)
{
	int l = 0, j = 0;
	
	while ( str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		j = l / 2;
	}
	else {
		j = l - 1 / 2;
	}
	while (str[j] != '\0')
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');

}
