#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
