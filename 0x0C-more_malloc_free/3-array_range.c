#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates an array of integers
 * @min: values to be included
 * @max: values to be included
 * Return: Return pointer to the array
 */
int *array_range(int min, int max)
{
	int *int_arr;
	int i;

	if (min > max)
		return (NULL);
	int_arr = malloc(((max - min) + 1) * sizeof(int));
	if (int_arr == NULL)
		return (NULL);
	for (i = 0; i < ((max - min) + 1); i++)
		int_arr[i] = min + i;
	return (int_arr);
}
