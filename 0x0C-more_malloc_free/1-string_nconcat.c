#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes to be concatenated to the first string
 * Return: Pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int i, j;
	unsigned int limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0', i++)
		;
	for (j = 0; *(s2 + j) != '\0', j++)
		;

	concat_string = malloc((i + n) + 1 * sizeof(char));

	if (concat_string == NULL)
	{
		free(concat_string);
		return (NULL);
	}

	for (int k = 0; k < i; k++)
		concat_string[k] = s1[k];
	limit = j;
	for (j = 0; j < limit; limit++, k++)
	{
		concat_string[k] = s1[j];
	}
	return (concat_string);
}
