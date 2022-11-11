#include "main.h"

/**
 * main - this program prints the number of arguments passed to it
 * followed by a new line
 * @argc: number of arguments
 * @argv: number of arrays
 * Return: 0 always if successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
