#include "main.h"

/**
 * _strcat - this program concatenates two strings
 * @dest: the string to be appended to
 * @src: the string to be added
 * Return: pointer to the resultant string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
