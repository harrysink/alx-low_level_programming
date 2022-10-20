#include "main.h"

/**
 * _islower - program checks for lowercase character
 * @c: charcter for check
 * Return: always 1 if c is lowercas, or 0 if not
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
