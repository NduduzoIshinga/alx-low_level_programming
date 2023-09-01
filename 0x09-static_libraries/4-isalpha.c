#include "main.h"

/**
 * _isalpha - Test if lower
 *
 * @c: is parameter checked for
 *
 * Return: 1 or 0 (Success)
 */
int _isalpha(int c)
{
	int out;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		out = 1;
	} else
	{
		out = 0;
	}
	return (out);
}
