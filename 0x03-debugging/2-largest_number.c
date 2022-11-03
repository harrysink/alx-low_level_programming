#include <stdio.h>
#include "main.h"

/**
 * largest_number - retunrs the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main(void)
{
	
int largest_number(int a, int b, int c)

	int largest;

	if (a >= b && a >= c)
	{
		printf("%d/n", a);
	}
	else if (b >= a && b >= c)
	{
		printf("%d/n", b);
	}
	else
	{
		printf("%d/n", c);
	}
	
	return (0);
}
