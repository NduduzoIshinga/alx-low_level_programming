#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char in)
{
	write(1, &in, 1);
	return (0);
}
