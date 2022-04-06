#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Creates an array of characters and initializes it
 * @size: size of array
 * @c: The character with which we will fill with
 * Return: Pointer to the array of NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int count;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	for (count = 0; count <= size; count++)
	{
		arr[count] = c;
	}
	return (arr);
}
