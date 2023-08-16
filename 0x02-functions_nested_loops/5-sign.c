#include "main.h"

/**
 * print_sign - check if num is pos or neg
 * @n: the argument taken
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int out;

	if (n > 0)
	{
		_putchar('+');
		out = 1;
	} else if (n == 0)
	{
		_putchar('0');
		out = 0;
	} else if (n < 0)
	{
		_putchar('-');
		out = -1;
	}
	return (out);
}
