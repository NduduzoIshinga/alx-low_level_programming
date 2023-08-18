#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *@n: is argument, length of line
 * Return: void
 */
void print_diagonal(int n)
{
	int i, k;

	k = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		for (i = 1; i <= k; i++)
		{
			_putchar(' ');
		}
		_putchar('\');
		n--;
		k++;
		_putchar('\n');
	}
}
