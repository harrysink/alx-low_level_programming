#include "function_pointers.h"

/**
 * array_iterator - this function executes a functiona as a given parameter on
 * each element of an aray
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used for iteration
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
