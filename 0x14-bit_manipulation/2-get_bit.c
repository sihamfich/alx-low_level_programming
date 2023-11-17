#include "main.h"

/**
 * get_bit - function that returns
 * the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, idx;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	div = 1 << index;
	idx = n & div;
	if (div == idx)
		return (1);
	return (n >> index & 1);
}
