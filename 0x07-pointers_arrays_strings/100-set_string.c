#include "main.h"

/**
 * set_string - Set the value of a pointer to a char.
 * @s: Pointer to the pointer that needs to be set.
 * @to: String to set the pointer value to.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
