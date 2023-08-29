#include "main.h"

/**
 * print_chessboard - print 8 by 8
 * @a: parameter 2d array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, k;

	i = 0;
	while (i < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[i][k]);
			k++;
		}
		_putchar('\n');
		i++;
	}
}
