#include "main.h"

/**
 * clear_bit - this program set the value of a bit to 0 at a given index
 * @n: pointer to the number to be changed
 * @index: bit index to be cleared
 *
 * Return: 1 if successful and -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
