#include "main.h"

/**
 * _abs - prints absolute value of an integer
 *
 * @i: parameter to be printed
 *
 * Return: i
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
