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
	int y, z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';
	return (dest);
}
