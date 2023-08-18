#include <stdio.h>

/**
 * prime - prints highest prime factor
 *
 * Return: Always 0 (Success)
 */
int prime(void)
{
	int count, p, big;
	long int n;

	for (n = 2; n <= 612852475143; n++)
	{
		count = 0;
		if (612852475143 % n == 0)
		{
			p = 0;
			for (p = 1; p <= n; p++)
			{
				if (n % p == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				big = n;
			}
		}
	}
	printf("%d", big);
	return (0);
}
