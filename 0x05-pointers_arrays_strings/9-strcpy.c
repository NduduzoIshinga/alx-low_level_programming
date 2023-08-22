#include "main.h"

/**
 * _strcpy - copies src to dest
 * @src: copied from
 * @dest: copied to
 * Return: char hex
 */
char *_strcpy(char *dest, char *src)
{
	char copy[], orig[];
	int i, check = 0;

	orig = *src;
	i = 0;
	while (check = 0)
	{
		copy[i] = orig[i];
		if (orig[i] == '\0')
		{
			check = 1;
		}
		i++;

	}
	*dest = copy;
	return (dest);
}
