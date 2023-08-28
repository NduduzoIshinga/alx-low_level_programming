#include "main.h"

/**
 * _memcpy - copies src arrays memory to dest array, n times
 * @dest: array tocopy to
 * @n: amount of times i is copied
 * @src: array to copy from
 * Return: Hex value pointer address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
