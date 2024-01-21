#include "main.h"

/**
 * _isdigit - function that checks for a digit from 0 to 9
 *
 * @c: parameter to be printed
 *
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
