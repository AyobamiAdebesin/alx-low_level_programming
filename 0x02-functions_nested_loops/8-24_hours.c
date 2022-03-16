#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 *
 * Return: Every minute of the day of Jack Bauer
 *(0<=a<=2, 0<=b<=9, 0<=c<=5, 0<=d<= 9)
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
					{
						break;
					}
					else
					{
						_putchar(a);
						_putchar(b);
						_putchar(58);
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
	}
}
