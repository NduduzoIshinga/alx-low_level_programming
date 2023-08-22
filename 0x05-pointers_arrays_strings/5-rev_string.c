#include "main.h"

/**
 * rev_string - returns a reversed string
 *@s: argument
 * Return: void
 */
void rev_string(char *s)
{
	int i, k;
	char string[], rev[];

	string = *s;
	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	i--;
	k = 0;
	while (i >= 0)
	{
		rev[k] = string[i];
		i--;
		k++;
	}
	*s = rev;
}
