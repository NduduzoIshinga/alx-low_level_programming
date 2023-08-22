#include "main.h"

/**
 * puts_half - prints half a string
 *@str: argument
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; i < len; i++)
		{
		_putchar(str[i]);
		}
	} else
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
