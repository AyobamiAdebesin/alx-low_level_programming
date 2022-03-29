#include "main.h"
#include <stddef.h>
/**
 * _strstr - Find a string in another string
 * @haystack: The universal string
 * @needle: The string we want to look for
 * RETURN: Pointer to the beginning of the located string or NULL
 */

int compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}

	return (*Y == '\0');
}

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
