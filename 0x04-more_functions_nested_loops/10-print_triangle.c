#include "main.h"

/**
 * print_triangl - prints a triangle
 *
 * @size: size of the triangle
 *
 * return: always 0(success)
*/
void print_triangle(int size);
{
	int hieght, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hieght = 1; hieght <= size; hieght++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hieght + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
