#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - this program locates a substring
 * @haystack: string in which to search
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the discovered substring, or NULL if
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
