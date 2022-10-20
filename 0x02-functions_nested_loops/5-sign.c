#include "main.h"

/**
 * print_sign - this program prints the sign of a number
 * @n: int to be checked
 * Return: always 1, prints + if n is greater tahn zero
 * return 0 and prints 0 is n is zero
 * return -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
