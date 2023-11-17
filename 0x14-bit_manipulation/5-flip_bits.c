#include "main.h"

/**
 * flip_bits - function that returns the number
 * of bits you would need to flip to get
 * from one number to another.
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int countbit = 0;
	unsigned long int exclusive = n ^ m;

	while (exclusive)
	{
		if (exclusive & 1ul)
			countbit++;
		exclusive = exclusive >> a;
	}
	return (countbit);
}
