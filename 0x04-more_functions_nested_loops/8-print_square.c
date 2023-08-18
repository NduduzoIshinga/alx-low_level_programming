#include "main.h"

/**
 * print_square - prints a square
 *@size: is argument, size of square
 * Return: void
 */
void print_square(int size)
{
	int i, k;

	k = size;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > 0)
	{
		for (i = 1; i <= k; i++)
		{
			_putchar('#');
		}
		size--;
		_putchar('\n');
	}
}
