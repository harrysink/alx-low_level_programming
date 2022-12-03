#include "main.h"

/**
 * _strcpy - this program copies a string pointed to by src, including '\0', to
 * the buffer pointed to by dest
 * @src: pointer to string to be copied
 * @dest: pointer to the buffer to which the string is to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
