#include <stdio.h>

/**
 * main - this program prints the first 50 fibonacci numbers
 * starting with 1 and 2, and a new line following after
 * Return: 0 always if successful
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1, i <= 50; ++i;)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
