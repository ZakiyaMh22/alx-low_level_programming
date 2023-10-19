#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * 
 * @dest: desttination string pointer
 * @src: source string pointer
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src int n)
{
		int length, z;

		length = 0;
		while (dest[length] != '\0')
		{
			length++;
		}
		for (z = 0; z < n && src[z] != '\0'; z++, length++)
		{
			dest[length] = src[z];
		}
		dest[length] = '\0';
		return (dest);
}
