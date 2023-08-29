#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sprint sums of two diagonals
 * @a: 2d array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, k;
	long int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	k = size - 1;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size) + i);
		sum2 += *(a + (i * size) + k);
		k--;
	}
	printf("%ld, %ld\n", sum1, sum2);
}
