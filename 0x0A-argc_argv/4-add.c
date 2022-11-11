#include "main.h"
#include <stdlib.h>

/**
 * main - this program adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always if successful
 */
int main(int argc, char *argv[])
{
	int i, j, k, num, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
		{
			sum = sum + num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
