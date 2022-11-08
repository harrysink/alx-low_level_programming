#include <stdio.h>

/**
 * main - this function prints the lowercase alphabet in
 * reverse, followed by a new line
 * Return: 0 always when successful
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
