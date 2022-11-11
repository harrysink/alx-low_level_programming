#include "main.h"

/**
 * main - this program prints its name, followed by a new line
 * @argc - number of arguments
 * @argv - array of arguments
 * Return: 0 always if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
