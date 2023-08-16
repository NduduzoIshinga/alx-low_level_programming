#include "main.h"

/**
 * print_last_digit - get last dig of num
 * @n: is argument taken
 * Return: integer last digit
 */
int print_last_digit(int n)
{
	int last, temp;

	last = n;
	if (last < 0)
	{
		last *= -1;
	}
	temp = last % 10;
	last = temp;
	_putchar(last);
	return (last);
}
