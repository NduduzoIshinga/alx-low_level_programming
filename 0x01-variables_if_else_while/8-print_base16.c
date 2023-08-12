#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex = 48;

	while (hex <= 102)
	{
		putchar(hex);
		hex++;
		if (hex == 58)
		{
			hex = 97;
		}
	}
	putchar('\n');
	return (0);
}
