#include "main.h"

/**
 * _strncpy - this program copies a string
 * @dest: string of destination
 * @src: string of source
 * @n: numbers of bytes to be copied
 * Return: a pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
