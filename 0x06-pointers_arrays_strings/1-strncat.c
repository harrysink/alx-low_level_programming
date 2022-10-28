#include "main.h"

/**
 * _strncat - this program concatenates n bytes from one
 * string to another string
 * @dest: string for destination
 * @src: string for source
 * @n: bytes number of str for concatenation
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
