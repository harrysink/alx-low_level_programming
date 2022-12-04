#include "main.h"

/**
 * set_string - this program sets the value of a pointer to a char
 * @s: pointer to the pointer needed to be set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
