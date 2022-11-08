#include <stdio.h>

/**
 * main - this function prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: 0 when successful
 */
int main(void)
{
	char al, au;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (au = 'A'; au <= 'Z'; au++)
	{
		putchar(au);
	}

	putchar('\n');
	return (0);
}
