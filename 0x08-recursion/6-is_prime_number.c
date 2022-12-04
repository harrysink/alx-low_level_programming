#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - this program returns 1 if the input integer is a prime
 * number, otherwise, returns 0
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate recursively if a number is prine
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
