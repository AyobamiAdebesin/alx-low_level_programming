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
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	if (n > j)
		n = j;

	concat_string = malloc(((i + n) + 1) * sizeof(char));

	if (concat_string == NULL)
		return (NULL);

	for (k = 0; k < (i + n); k++)
	{
		if (k < i)
			concat_string[k] = s1[k];
		else
			concat_string[k] = s2[k - i];
	}
	concat_string[k] = '\0';
	return (concat_string);
}
