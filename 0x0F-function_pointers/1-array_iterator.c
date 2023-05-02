#include "function_pointers.h"

/**
 * array_iterator - the function
 * @array: Array of the function
 * @size: The Size
 * @action: Action of the function
 *
 * Return: The 0 success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
	while (i < size)
	{
	action(array[i])
	i++;
	}
}
}
