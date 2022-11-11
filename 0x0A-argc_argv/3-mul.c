#include "main.h"
#include <stdlib.h>

/**
 * main - thsi program multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, n, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	n = atoi(argv[2]);
	p = i * n;

	printf("%d\n", p);

	return (0);
}
