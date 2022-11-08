#include <stdio.h>

/**
 * main - this function prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 when successful
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
