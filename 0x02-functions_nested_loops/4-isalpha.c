#include "main.h"

/**
 * _isalpha - program checks for alpahbetic character
 * @c: character to check
 * Return: always 1 if c is an alphabet, or 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
