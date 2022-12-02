#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1-100, followed by a new line;
 * for multiples of 3, prints Fizz instead of the number; for
 * multiples of 5, prints Buzz & for multiples of both 3 & 5,
 * prints FizzBuzz
 * Return: 0 always when successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
