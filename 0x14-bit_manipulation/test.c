#include <stdio.h>
#include <stdlib.h>

unsigned int binary_touint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (*(b + i) == '0' || *(b + i) == '1')
	{
		val <<= 1;
		val += *(b + i) - '0';
		i++;
	}

	return (val);
}

int main (int argc __attribute__((unused)), char *argv[])
{

	unsigned int n;

	n = binary_touint(argv[1]);
	printf("%u\n", n);

	return (0);
}
