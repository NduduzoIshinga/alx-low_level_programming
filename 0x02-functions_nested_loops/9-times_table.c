#include "main.h"

/**
 * times_table - does timesing
 *
 * Return: times table
 */
void times_table(void)
{
	int i, k, times, spaces;

	i = 0;
	while (i <= 9)
	{
		k = 0;
		while (k <= 9)
		{
			times = i * k;
			if (times = 0)
			{
				spaces = 2;
			} else
			{
				spaces = 3;
				while (times >= 1)
				{
					times /= 10;
					space--;
				}
			}

			if (i != 0)
			{
				_pitchar(',');
				while (space != 0)
				{
					_putchar(' ');
					space--;
				}
			}
			_putchar(times);
			k++;
		}
		i++;
		_putchar('\n');
	}
}
