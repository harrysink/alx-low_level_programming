#include "main.h"

/**
 * *array_range - this function creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values store and number of elements in the array
 *
 * Return: the pinter to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
