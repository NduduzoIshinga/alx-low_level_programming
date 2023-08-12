#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int dig, found, run = 0, i = 0;
	int arrstore[200];

	while (num <= 56)
	{
		dig = 49;
		while (dig <= 57)
		{
			found = 0;

			for (run = 0; run < 200; run++)
			{
				if (arrstore[run] == (num * 10) + dig)
				{
					found = 1;
				}
			}
			arrstore[i] = (num * 10) + dig;
			i++;
			arrstore[i] = (dig * 10) + num;
			i++;
			if (found == 0 && num != dig)
			{
			putchar(num);
			putchar(dig);
			}
			dig++;
			if ((num <= 56 && dig <= 57) && found == 0)
			{
			putchar(',');
			putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
