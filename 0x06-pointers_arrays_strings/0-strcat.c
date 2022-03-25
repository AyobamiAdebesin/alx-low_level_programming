#include "main.h"
/**
 * _strcat - A function that concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: The pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
