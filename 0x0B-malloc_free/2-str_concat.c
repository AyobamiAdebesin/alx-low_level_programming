#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: the second string
 * Return: Pointer to the allocated memory of the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int count;
	char *str;
	int _strlen_s1 = 0, _strlen_s2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (count = 0; *(s1 + count) != '\0'; count++)
		_strlen_s1++;
	for (count = 0; *(s2 + count) != '\0'; count++)
		_strlen_s1++;

	str = malloc((_strlen_s1 + _strlen_s2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (count = 0; count <= (_strlen_s1 + _strlen_s2); count++)
	{
		if (count <= _strlen_s1)
		{
			str[count] = s1[count];
		}
		if (count > _strlen_s1)
		{
			str[count] = s2[count];
		}
	}
	return (str);
}
