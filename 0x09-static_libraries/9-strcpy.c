#include "main.h"

/**
 * _strcpy - copies src to dest
 * @src: copied from
 * @dest: copied to
 * Return: char hex
 */
char *_strcpy(char *dest, char *src)
{
	int i, check = 0;

	i = 0;
	while (check == 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			check = 1;
		}
		i++;

	}
	return (dest);
}
