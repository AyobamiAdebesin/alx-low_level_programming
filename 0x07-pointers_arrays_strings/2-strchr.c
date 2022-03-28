#include "main.h"
#include <stddef.h>
/**
 * _strchr - Find a character in a string
 * @s: The string address
 * @c: The chracter to be found
 *
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return (s + count);
}
