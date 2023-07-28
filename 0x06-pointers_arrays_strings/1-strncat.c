#include "main.h"
/**
 * _strncat - concantenates two strings
 *using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i, j;

	while (dest[len1] != '\0')
	len1++;

	while (src[len2] != '\0')
	len2++;

	for (i = len1, j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
