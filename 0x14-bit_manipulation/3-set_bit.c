#include "main.h"

/**
 * set_bit - this program sets the value of a bit to 1 at a given index
 * @n: pointer to the number to be changed
 * @index: bit index set to 1
 *
 * Return: 1 if successful and -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
