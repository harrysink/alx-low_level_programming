#include <stdio.h>

/**
 * main - this function prints the alphabet in lowercase,
 * followed by a new line, all except q and e
 * Return: 0 always when successful
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
