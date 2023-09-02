#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two nums
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	long int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isint(argv[i]) == 1)
		{
			puts("ERROR");
			return (1);
		}
		sum += strtol(argv[i], NULL, 10);
	}
	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
	} else
	{
		printf("%ld\n", sum);
	}
	return (0);
}

/**
 * isint - checks for int
 * @str: string
 * Return: 1 or 0
 */
int isint(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (1);
		}
		str++;
	}
	return (0);
}
