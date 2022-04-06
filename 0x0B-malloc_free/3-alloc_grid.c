#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - Returns a pointer to a 2d array of integers
 * @width: Width of the array
 * @height: Height of the array
 * Return: Pointer to the generated array
 */

int **alloc_grid(int width, int height)
{
	int count;
	int **arr[][];

	if (height == 0 || width == 0)
		return (NULL);
	arr = malloc((width * height) * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (count = 0; count <= (width * height); count++)
	{
		arr[count] = 0;
	}
	return (arr);
}
