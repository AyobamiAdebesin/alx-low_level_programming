#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - Return a pointer to a newly allocated space in memory
 * @str: The string given
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *arr;
	int _strlen;
	int count;

	if (str == NULL)
		return (NULL);

	_strlen = 0;
	for (count = 0; *(str + count) != '\0'; count++)
		_strlen++;
	arr = malloc(_strlen * sizeof(char));
	if (arr == NULl)
		return (NULL);
	for (count = 0; count <= _strlen; count++)
	{
		arr[count] = str[count];
	}
	return (arr);
