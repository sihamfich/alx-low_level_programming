#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: 2d array of int type
 * @size: size of array
 *
*/

void print_diagsums(int *a, int size)
{
	int i, p = 0, q = 0;

	for (i = 0; i < size; i++)
	{
		p += a[i];
		q += a[size - i - 1];
		a += size;
	}
	printf("%d,", p);
	printf("%d\n", q);
}
