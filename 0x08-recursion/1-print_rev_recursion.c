#include "main.h"

/**
 * _puts_rev_recursion - puts mimic
 * @s: string to be put
 * Return: void
 */
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
