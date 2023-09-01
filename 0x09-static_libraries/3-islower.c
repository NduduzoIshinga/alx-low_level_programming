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
	int out;

	if (c >= 97 && c <= 122)
	{
		out = 1;
	} else
	{
		out = 0;
	}
	return (out);
}
