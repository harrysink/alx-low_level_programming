#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0 always when successful
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		printf("%d is the largest number\n", a);
	}
	else if (b > a && b > c)
	{
		printf("%d is the largest number\n", b);
	}
	else
	{
		printf("%d is the largest number\n", c);
	}

	return (0);
}
