#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string of a binary number(0/1)
 *
 * Return: unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);/*Handle the case where the input pointer is NULL.*/

	unsigned int Num = 0;/*Initialize num to 0.*/
	int i;/*Index*/

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);/* Invalid character encountered; return 0.*/
		Num = (Num << 1) | (b[i] - '0');/* Update num based on the current bit.*/
	}

	return (Num);/* Return the converted unsigned integer.*/
}
