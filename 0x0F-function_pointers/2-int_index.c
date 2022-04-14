#include "funtion_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Searches for an integer
 * @array: The array we need to search
 * @size: The size of the array
 * @cmp: The function pointer to be used
 * Return: 0, -1, and int 
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
			else
				return (-1);
		}
	}
}
