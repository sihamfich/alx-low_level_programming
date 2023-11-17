#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: number binary to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int binary;

	for (int i = size - 1; i >= 0; i--)
	{
		binary = (n >> i) & 1;
		putchar(binary + '0');
	}
}
