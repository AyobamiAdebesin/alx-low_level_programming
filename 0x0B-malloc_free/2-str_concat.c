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
	int count1;
	unsigned int count2;
	char *str;
	int _strlen_s1 = 0, _strlen_s2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (' ');
	for (count1 = 0; *(s1 + count1) != '\0'; count1++)
		_strlen_s1++;
	for (count1 = 0; *(s2 + count1) != '\0'; count1++)
		_strlen_s1++;

	str = malloc((_strlen_s1 + _strlen_s2 + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	for (count1 = 0; count1 <= (_strlen_s1 + _strlen_s2); count++)
	{
		if (count1 <= _strlen_s1)
		{
			str[count1] = s1[count1];
		}
		if (count1 > _strlen_s1)
		{
			str[count1] = s2[count1];
		}
	}
	return (str);
}
