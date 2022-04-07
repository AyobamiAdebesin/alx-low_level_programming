#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if(i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char *a;
	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a+4, "School! :)\n");
	free(a);
	return (0);
}
