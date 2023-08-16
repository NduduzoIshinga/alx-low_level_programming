#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
