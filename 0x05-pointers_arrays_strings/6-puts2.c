#include "main.h"

/**
 * puts2 - prints a string string
 *@str: argument
 * Return: void
 */
void puts2(char *str)
{
	int i;
	char string[];

	string = *str;
	i = 0;
	while (string[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(string[i]);
		}
		i++;
	}
	_putchar('\n');
}
