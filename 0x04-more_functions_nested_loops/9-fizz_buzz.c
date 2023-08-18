#include <stdio.h>

/**
 *fizz_buzz - Fizz buzz test
 *
 * Return - void
 */
void fizz_buzz(void)
{
	int i, mod3, mod5

	for (i = 1; i <= 100; i++)
	{
		mod3 = i % 3;
		mod5 = i % 5;
		if (mod3 == 0 && mod5 == 0)
		{
			printf("FizzBuzz");
		} else if (mod3 == 0)
		{
			printf("Fizz");
		} else if (mod5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}
}
