#include "main.h"

/**
 * _isalpha - function to checks for alphabetic character
 *
 * @c: take input from other function
 *
 * Return: 1 if c is letter 1 true else 0
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 64 && c <= 90)
		return (1);
	return (0);
}
