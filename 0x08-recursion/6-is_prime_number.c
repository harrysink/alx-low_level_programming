#include "main.h"

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
