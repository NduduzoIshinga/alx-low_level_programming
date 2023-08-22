#include "main.h"

/**
 * rev_string - returns a reversed string
 *@s: argument
 * Return: void
 */
void rev_string(char *s)
{
	int i, k;
	char rev [] = {'h', 'i'};

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	k = 0;
	while (i >= 0)
	{
		rev[k] = s[i];
		i--;
		k++;
	}
	i = 0;
	while (rev[i] != '\0')
	{
		s[i] = rev[i];
		i++;
	}
}
