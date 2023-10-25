#include "main.h"

/**
 * move_past_star - iterates past asterisk
 * @s2: second string, contain wildcard
 * Retuen: the pointer past star
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 +1));
	else
		return (s2);
}
/**
 * inception - makes magic a reality
 * @s1: the first string
 * @s2: second string, contain wildcare
 * Return: 1 if identical, 0 if false
*/
int incepion(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);

