#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstQigit <= 99)
	{
		seconDigit = firstDogot;
		while (seconDigit <= 99)
		{
			if (seconDigit <= 99)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
