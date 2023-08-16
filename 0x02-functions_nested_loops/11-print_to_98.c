#include <stdio.h>

/**
 *print_to_98 - prints nums
 *@n: is argument
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		putchar(i);
		if (i != n)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
}
