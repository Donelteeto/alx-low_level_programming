#include "main.h"

/**
 * _strncat - a function that concatenate two strings similar to _strcat
 *
 * @dest: value to be pprinted
 * @src:value to be printed
 * @n: parameter to be printed
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
