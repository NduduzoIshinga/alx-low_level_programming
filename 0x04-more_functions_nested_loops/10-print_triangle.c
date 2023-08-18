#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: is argument, size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, k, s;

	k = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > 0)
	{
		s = size - 1;
		for (s = s; s > 0; s--)
		{
			_putchar(' ');
		}
		for (i = 1; i <= k; i++)
		{
			_putchar('#');
		}
		k++;
		size--;
		_putchar('\n');
	}
}
