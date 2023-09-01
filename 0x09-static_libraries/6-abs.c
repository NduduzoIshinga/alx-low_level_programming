#include "main.h"

/**
 * _abs - compute absolute value
 * @n: is the argument
 * Return: positive integer
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n * (-1);
	} else
	{
		abs = n;
	}
	return (abs);
}
