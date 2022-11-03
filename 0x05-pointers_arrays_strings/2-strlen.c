#include "main.h"

/**
 * _strlen - this program returns the length of a string
 * @s: string whose length is to be returned
 *
 *Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

