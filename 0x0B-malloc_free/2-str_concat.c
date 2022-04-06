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
	unsigned int i;
	char *str;
	unsigned int _strlen_s1 = 0, _strlen_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count = 0; *(s1 + count) != '\0'; count++)
		_strlen_s1++;
	for (count = 0; *(s2 + count) != '\0'; count++)
		_strlen_s2++;

	str = malloc((_strlen_s1 + _strlen_s2 + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (count = 0; count < _strlen_s1; count++)
	{
		str[count] = s1[count];
	}
	i = _strlen_s2;
	for (_strlen_s2 = 0; _strlen_s2 <= i; count++, _strlen_s2++)
	{
		str[count] = s2[_strlen_s2];
	}
	return (str);
}
