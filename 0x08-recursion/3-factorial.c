#include "main.h"

/**
 * factorial - get factorial
 * @n: int to be calced
 * Return: Int value answer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
