#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	if (argc == 4000)
	{
		return (argc);
	}
	return (0);
}
