#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int j, k;

	j = 48;
	k = 48;

	while (k < 58)
	{
		i = 48;
		while (j < 58)
		{
			putchar(k);
			putchar(j);
			if ( j == 57 && k == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
