#include "main.h"

/**
 * _memset - fills an arrays memory with a constant byte
 * @s: array to be filled
 * @n: amount of times it should be filled
 * @b: byte to be written
 * Return: Hex value pointer address
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
