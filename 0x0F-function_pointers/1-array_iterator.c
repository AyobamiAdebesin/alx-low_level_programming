#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array with a function pointer.
 * @array: array to be iterated.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
