#include "main.h"

/**
 * jack_bauer - print times of day
 * 
 * Return: void
 */
void jack_bauer(void)
{
	int s,m,h,h2;

	h2 =48;
	while (h2 <= 50)
	{
		h = 48;
		while (h <= 51)
		{
			m = 48;
			while (m <= 53)
			{
				s = 48;
				while (s <= 57)
				{
					_putchar(h2);
					_putchar(h);
					_putchar(':');
					_putchar(m);
					_putchar(s);
					_putchar('\n');
					s++;
				}
				m++;
			}
			h++;
		}
		h2++;
	}
}
