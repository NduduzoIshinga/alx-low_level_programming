#include "main.h"

/**
 * _strlen_recursion - calcs len of str
 * @s: string
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
