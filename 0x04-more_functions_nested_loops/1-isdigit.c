#include "main.h"

/**
 * _isdigit - checks if char is a digit
 *@c: is argument
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int result;

	if (c <= 57 && c >= 48)
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
