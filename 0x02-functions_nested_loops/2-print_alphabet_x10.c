#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ten = 0;

	while (ten < 10)
	{
		int alph = 97;

		while (alph <= 122)
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		ten++;
	}
}
