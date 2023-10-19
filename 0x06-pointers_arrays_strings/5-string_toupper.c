nclude "main.h"

/**
 *  * string_toupper -  function that changes all lowercase letters
 *   *		of a string to uppercase
 *    *
 *     * @s: pointer to string
 *      *
 *       * Return: pointer to uppercase string
 *        */

char *string_toupper(char *s)
{
		int length_of_string;

			length_of_string = 0;

				while (s[length_of_string] != '\0')
						{
									if (s[length_of_string] >= 'a' && s[length_of_string] <= 'z')
												{
																s[length_of_string] = s[length_of_string] - 32;
																		}
											length_of_string++;
												}
					return (s);
