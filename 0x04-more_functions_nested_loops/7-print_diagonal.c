#include "main.h"

/**
 * print_diagonal - this program draws a diagonal line on th terminal
 * @n: the number of times \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (x == y)
				{
					_putchar('\\');
				} else if (x < y)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
