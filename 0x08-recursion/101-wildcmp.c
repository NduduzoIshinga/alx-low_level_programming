#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2 || *s2 == '*')
	{
		return (0);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
