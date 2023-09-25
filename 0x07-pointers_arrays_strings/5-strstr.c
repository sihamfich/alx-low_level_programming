#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: a pointer to the beginning of
 * the located substring, or NULL if the s
 * ubstring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *q = haystack;
	char *p = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*q == *p && *p != '\0')
		{
			q++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
