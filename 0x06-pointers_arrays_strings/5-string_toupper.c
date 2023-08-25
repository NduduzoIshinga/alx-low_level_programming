#include "main.h"

/**
 *string_toupper - changes lowwer to upper case in a string
 *@str: string
 *Return: string
 */
char *string_toupper(char *str)
{
	int i;
	int c;

	i = 0;
	while (i != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			c = str[i];
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}
