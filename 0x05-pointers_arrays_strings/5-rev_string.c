#include "main.h"

/**
 * rev_string - returns a reversed string
 *@s: argument
 * Return: void
 */
void rev_string(char *s)
{
	int i, k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	char rev[i];
	k = 0;
	while (i >= 0)
	{
		rev[k] = s[i];
		i--;
		k++;
	}
	*s = rev;
}
