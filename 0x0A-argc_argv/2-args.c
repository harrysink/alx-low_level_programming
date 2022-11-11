#include "main.h"

/**
 * main - this program prints all the arguments it receives, on a new
 * line, ending with a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always if successful
 */
int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
