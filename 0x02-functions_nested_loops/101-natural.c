#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: integer
 */
int main(void)
{
	int i, sum;

	i = 1;
	sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
