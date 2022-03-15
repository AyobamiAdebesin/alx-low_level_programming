#include "main.h"
/**
 * _islower - Check if an alphabet is lower case or upper case
 * @c - Character to be checked
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
