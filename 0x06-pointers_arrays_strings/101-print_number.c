#include "main.h"
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0 success
*/
void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (n1 / 10 != 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
