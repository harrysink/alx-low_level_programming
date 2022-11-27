#include "main.h"

/**
 * _sqrt_recursion - this program returns the natural square root of a number
 * @n: number whose square root is to be found
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}
