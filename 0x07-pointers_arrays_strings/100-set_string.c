#include "main.h"

/**
 * set_string - sets the value of a pointer to
 * a char
 *
 * @s: the variable to set
 * @to: the value to be used
 */
void set_string(char **s, char *to)
{
	*s = to;
}
