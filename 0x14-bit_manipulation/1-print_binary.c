#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: number binary to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int val = sizeof(n) * 8;
	unsigned long int new;

	for (i = val; i >= 0; i--)
	{
		new = n << i;
		if (n & new)
			_putchar('1');
		else
		{
			_putchar('0');
			i++;
		}
	}
}
