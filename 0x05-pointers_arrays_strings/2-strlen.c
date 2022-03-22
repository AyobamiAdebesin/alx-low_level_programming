#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: the character we want to find its length
 * Return: int- The length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
