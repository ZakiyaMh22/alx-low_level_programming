#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (_isdigit(*s))
			result = result * 10 + (*s - '0');
		else if (result > 0)
			break;
		s++;
	}

	return (result * sign);
}

/**
 * mul - Multiplies two positive numbers.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The result of the multiplication.
 */
char *mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len_res = 0, i, j, carry;
	char *res;

	while (num1[len1])
	{
		len1++;
	}
	while (num2[len2])
		len2++;

	len_res = len1 + len2;
	res = malloc(len_res + 2);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len_res + 1; i++)
		res[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0') + (res[i + j + 1] - '0');
			res[i + j + 1] = carry % 10 + '0';
			carry /= 10;
		}
		res[i + j + 1] = carry + '0';
	}

	for (i = 0; i < len_res + 1; i++)
	{
		if (res[i] != '0')
			break;
	}

	return (res + i);
}
/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, otherwise 98.
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	result = mul(argv[1], argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}

