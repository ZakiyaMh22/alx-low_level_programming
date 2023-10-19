#include "main.h"

/**
 * *_strcpy - copecc the string pinted to  by src
 * 8dest: char type str
 * 8src: char type stri
 * Description: copy the string pointed to by pointer 'src' to the buffef pointed to 'dest' 
*/
void *_strcpy(char *dest, char *src)
{
	int i = -1;
	do{
		i++;
		dest[i] = src[i];
	}
	while(src != '\0');
	return (dest);
}
