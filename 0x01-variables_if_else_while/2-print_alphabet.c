#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print alphabet in lowercase then in uppercase
 *
 *  Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	/*Print a-z lower cases */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
