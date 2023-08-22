#include "main.h"

/**
 * swap_int - swaps values of a and b
 *@a: argument 1
 *
 *@b: argument 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
