#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *  Description: print alphabet in lowercase then in uppercase
 *  Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* Print a-z lower cases */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
