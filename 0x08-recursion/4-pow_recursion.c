#include "main.h"

/**
 * _pow_recursion - this program returns the value of x raised to the power
 * of y
 * @x: value of the number
 * @y: power to be raised to
 *
 * Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
