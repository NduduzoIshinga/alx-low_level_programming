#include "main.h"

/**
 * print_line - prints a line
 *@n: is argument, length of line
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
