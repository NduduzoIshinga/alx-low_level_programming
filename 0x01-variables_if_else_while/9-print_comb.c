#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	putchar(num);
	while (num <= 56)
	{
		num++;
		putchar(',');
		putchar(' ');
		putchar(num);
	}
	putchar('\n');
	return (0);
}
