#include "main.h"

/**
 * Main - Entry point
 *
 *Description: prints _putchar
 *
 * Return: On success 1.
 *
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
