#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	long int prod, num1, num2;

	if (argc != 3)
	{
		puts("ERROR");
		return (1);
	}
	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);
	prod = num1 * num2;
	printf("%ld\n", prod);
	return (0);
}
