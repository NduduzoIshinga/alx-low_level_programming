#include "main.h"

/**
 * _strncat - concats n bytes of src into dest string
 * @src: first arguent
 * @dest: second argument
 * @n: num of bytes
 * Return: Hex value
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, i;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	i = 0;
	while (i != n)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
