#include "main.h"

/**
 * _strcat - concats src into dest string
 * @src: first arguent
 * @dest: second argument
 * Return: Hex value
 */
char *_strcat(char *dest, char *src)
{
	int count, i;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
