#include <stdio.h>

/**
 * main - prints highest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, n, p, big;

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
				big = n
			}
		}
	}
	printf("%d", big);
	return (0);
}
