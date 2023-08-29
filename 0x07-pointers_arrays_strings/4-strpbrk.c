#include "main.h"

/**
 * _strpbrk - something about substrings
 * @s: string
 * @accept: substring
 * Return: char value
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *result = '\0';

	i = 0;
	while (s[i] != '\0')
	{
		if (isin(accept, s[i]) == 1)
		{
			result = &s[i];
			break;
		}
		i++;
	}
	return (result);
}

/**
 * isin - checks oof char is in string
 * @str: string
 * @c: char
 * Return: 0 or 1;
 */
int isin(char *str, char c)
{
	int i, check;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			check = 1;
		}
		i++;
	}
	return (check);
}
