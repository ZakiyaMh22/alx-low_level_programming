#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 1;

	while (str[i])
	{
		if (j && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		j = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';'
		|| str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '('
		||str[i] == ')' || str[i] == '{'|| str[i] == '}')
		{
			j = 1;
		}
	i++;
	}
	return (str);
}
