#include "main.h"

/**
 * _strstr - something about substrings
 * @haystack: string
 * @needle: substring
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *result = '\0';

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (allin(haystack, needle, i) == 1)
			{
				result = &haystack[i];
				break;
			}
		}
		i++;
	}
	return (result);
}

/**
 * lenstr - gets length of array
 * @s: string
 * Return: integer length
 */
int lenstr(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * allin - checks oof char is in string
 * @str: string
 * @c: substring
 * @n: start index
 * Return: 0 or 1;
 */
int allin(char *str, char *c, int n)
{
	int i, l, check, count = 0;

	i = 0;
	check = 0;
	l = lenstr(c);
	while (str[i + n] != '\0' && i != l)
	{
		if (str[i + n] == c[i])
		{
			count++;
		}
		i++;
	}
	if (count == l)
	{
		check = 1;
	}
	return (check);
}
