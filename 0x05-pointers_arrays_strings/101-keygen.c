#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101 - crackne
 * Return: zero
*/

int main(void)
{
	int num;
	char c;

	stand(time(NULL));
	while (sum <= 2645)
	{
		c = ran() % 128;
		sum+=c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
