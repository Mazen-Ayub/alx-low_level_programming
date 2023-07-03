#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to char
 * @s: the pointer to the pointer we need to set to
 * @to: the string to be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
