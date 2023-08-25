#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array 1
 * @n: num of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k, arr[] = {5, 6, 8, 9, 5, 24, 24, 356, 24, 24, 2, 24, 23, 5, 6, 8, 9, 2, 5};

	i = 0;
	while (i < n)
	{
		arr[i] = a[n - i - 1];
		i++;
	}
	k = 0;
	while (k < n)
	{
		a[k] = arr[k];
		k++;
	}
	a[k] = '\0';
}
