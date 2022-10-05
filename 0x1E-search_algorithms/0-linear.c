#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (sizeof(array) == 0 || array == NULL)
	{
		return (-1);
	}

	for(i=0; i < size; i++)
	{
		if (*(array+i) == value)
		{
			printf("Element found at position: %lu", i);
			return (i);
		}
	}
	
	return (-1);
}

int main(void)
{
	int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
	size_t size = sizeof(array) / sizeof(array[0]);
	printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	return (EXIT_SUCCESS);
}
