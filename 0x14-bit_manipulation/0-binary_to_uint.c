#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string of a binary number(0/1)
 *
 * Return: unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i; /*Index*/
	unsigned int Num;

	Num = 0;
	if (!b)
		return (0);/*Handle the case where the input pointer is NULL.*/
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);/* Invalid character encountered; return 0.*/

		Num <<= 1;/*Left-shift the bits*/
		if (b[i] == '1')
			Num += 1;
	}
	return (Num);
}
