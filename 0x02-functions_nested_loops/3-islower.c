#include "main.h"

/**
 * _islower - Test if lower
 *
 * @c: is argument takem
 *
 * Return: 1 or 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (!(c >= 97 && c <= 122))
	{
		return (0);
	}
}
