#include "main.h"

/**
 * _memset - this program fill memory with a constant byte
 * @s: memory area to be filled
 * @n: number  of time b is to be copied
 * @b: bytes (char) to be copied
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
