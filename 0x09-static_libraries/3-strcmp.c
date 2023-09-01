#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0 or -1
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	if (*s1 == *s2)
	{
		result = 0;
	} else if (*s1 < *s2)
	{
		result = -1;
	} else
	{
		result = 1;
	}
	return (result);
}
