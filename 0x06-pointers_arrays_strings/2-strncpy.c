#include "main.h"

/**
 * _strncpy - copies n bytes of src into dest string
 * @src: first arguent
 * @dest: second argument
 * @n: num of bytes
 * Return: Hex value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
