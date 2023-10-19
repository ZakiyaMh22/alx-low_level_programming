nclude "main.h"

/**
 *  *  _strcmp - function that compares two strings
 *   *
 *    *  @s1: pointer to first string
 *     *  @s2: pointer to seconed string
 *      *
 *       *  Return: compare_value
 *        */

int _strcmp(char *s1, char *s2)
{
		int i, j;

			i = 0;
				while (s1[i] == s2[i] && s1[i] != '\0')
						{
									i++;
										}

					j = s1[i] - s2[i];
						return (j);
}
