#include "main.h"

/**
 * more_numbers - outputs nums 0 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, check, num;

	for (i = 0; i < 10; i++)
	{
		num = 48;
		check = 1;
		while (num <= 57)
		{
			if (check == 0)
			{
				_pitchar(49);
			}
			_putchar(num);
			if (check == 1 && num == 57)
			{
				num = 48;
				check = 0;
			}
			if (check == 0 && num == 52)
			{
				break;
			}
			num++;
		}
		_putchar('\n');
	}
}
