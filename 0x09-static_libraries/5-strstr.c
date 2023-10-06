#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: input
 * @needle: string
 * Return: a pointer to the beginning of
 * the located substring, 0 success
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *q = haystack;
		char *p = needle;

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
