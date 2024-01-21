#include "main.h"

/**
 * isupper - a function that checks for uppercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
