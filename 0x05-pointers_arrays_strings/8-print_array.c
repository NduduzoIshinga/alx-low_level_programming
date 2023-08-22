#include "main.h"

/**
 * print_array - prints n values of an array
 *@a: argument
 *@n: argument 2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar(a[i]);
		i++;
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
