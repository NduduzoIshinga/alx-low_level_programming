#include "main.h"

/**
 * print_rev - prints a reversed string
 *@s: argument
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	char string[];

	string = *s;
	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(string[i]);
		i--;
	}
	_putchar('\n');
}
