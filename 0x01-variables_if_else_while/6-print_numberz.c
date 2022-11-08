#include <stdio.h>

/**
 * main - this function prints all single digit numbers of
 * base 10 starting from 0, followed by a new line
 * Return: 0 always when successful
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

