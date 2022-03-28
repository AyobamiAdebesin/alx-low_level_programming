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
	for (; *s != '\0' && *s != c; ++s)
		;
	return (*s == c ? (char *) s : (NULL));
}
