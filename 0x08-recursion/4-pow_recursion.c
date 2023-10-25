#include "main.h"

/**
 * _pow_recursion - unction that returns the value
 * @x: base
 * @y: exposant
 * Return: pointer to the byet is 's' that matches one of the byets in 'eccept'
 * of null if no such byet is found
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
