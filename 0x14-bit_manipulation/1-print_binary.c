#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: number binary to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int binary = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			_putchar('1');
			binary++;
		}
		else if (binary)
			_putchar('0');
	}
	else if (!binary)
		_putchar('0');
}
