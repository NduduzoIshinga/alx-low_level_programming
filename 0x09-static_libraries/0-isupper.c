#include "main.h"

/**
 * _isupper - checks if char is uppe case
 *@c: is argument
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int result;

	if (c <= 90 && c >= 65)
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
