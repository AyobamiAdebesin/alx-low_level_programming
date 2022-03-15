#include "main.h"
/**
 * main - Entry Point
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int chr_val[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;
	sz = sizeof(chr_val) / sizeof(int);

	for (count=0; count < sz; count++)
	{
		_putchar(chr_val[count]);
	}
	_putchar('\n');
	return(0);
}
	
