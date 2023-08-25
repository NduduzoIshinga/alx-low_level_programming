#include "main.h"

/**
 * isin - check if char in array
 * @ch: char
 * return: 1 or 0
 */
int isin(char ch)
{
	char is[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int k, yes;

	k = 0;
	yes = 0;
	while (is[k] != '\0')
	{
		if (is[k] == ch)
		{
			yes = 1;
		}
		k++;
	}
	return (yes);
}

/**
 *cap_string - changes lowwer to upper case in a string
 *@str: string
 *Return: string
 */
char *cap_string(char *str)
{
	int i, b;
	char c;

	i = 1;
	b = 0;
	while (i != '\0')
	{
		if (isin(str[i - 1]) == 1 && isin(str[i]) == 0)
		{
			b = 1;
		}
		if (b == 1)
		{
			c = str[i];
			str[i] = c - 32;
			b = 0;
		}
		i++;
	}
	return (str);
}
