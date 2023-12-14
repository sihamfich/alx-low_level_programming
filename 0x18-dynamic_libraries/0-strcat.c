#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: a pointer to the resulting string @dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;
	/*iterate through each src arrat value without NULL Byte*/
	for (c2 = 0; src[c2]; c2++)
		/* append src[c2] to dest[c] while overwriting null byt inn dest*/
		dest[c++] = src[c2];
	return (dest);
}
