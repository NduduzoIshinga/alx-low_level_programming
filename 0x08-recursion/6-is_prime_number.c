#include "main.h"

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_div(n, n - 1));
}

/**
 * prime_div - prime num
 * @n: number
 * @div: devide
 * Return: int
 */
int prime_div(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % div == 0)
	{
		return (0);
	}
	if (div == 1)
	{
		return (1);
	}
	return (prime_div(n, div - 1));
}
