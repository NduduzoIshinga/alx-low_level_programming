#include "main.h"

/**
 * _strchr - fills an arrays memory with a constant byte
 * @s: array to be searched
 * @c: char to be found
 * Return: Hex value pointer address
 */
char *_strchr(char *s, char c)
{
	int i, check;
	char *p;

	i = 0;
	check = 0;
	while (s[i] != '\0' && check == 0)
	{
		if (s[i] == c)
		{
			check = 1;
			p = &s[i];
		}
		i++;
	}
	if (check == 0)
	{
		p = '\0';
	}
	return (p);
}
