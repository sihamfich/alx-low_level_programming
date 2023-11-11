#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: number binary to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int val, i = 0;
	unsigned long int new;

	for (val = sizeof(n) * 8; val >= 0; val--)
	{
		new = n >> val;
		if (new)
			_putchar('0');
		else if (new & 1)
		{
			_putchar('1');
			i++;
		}
	}
}
