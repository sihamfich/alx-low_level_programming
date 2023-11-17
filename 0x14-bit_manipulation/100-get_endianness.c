#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;
	char *value;

	value = (char *)&a;
	return (*value);
}
