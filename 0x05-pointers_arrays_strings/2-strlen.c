#include "main.h"

/**
 * _strlen - outputs length of string
 *@s: argument
 * Return: int
 */
int _strlen(char *s)
{
	int i;
	char string[];

	string = *s;
	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}