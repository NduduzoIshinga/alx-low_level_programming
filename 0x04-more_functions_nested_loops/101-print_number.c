#include "main.h"

/**
 * print_number - prints an integer
 *@n: is parameter
 *Return: void
 */
void print_number(int n)
{
	int q, temp, i, rim;

	temp = n;
	q = 0;
	while (temp >= 1)
	{
		temp /= 10;
		q++;
	}
	n = n * 10;
	if (n < 0)
	{
		_putchar('-');
	}
	for (i = 1; i <= q; i++)
	{
		n /= 10;
		rim = n % 10;
		n -= rim;
		_putchar(rim + 48);
	}
}
