#include "main.h"

/**
 * positive_or_negative - prints a positive or negative number
 *
 * @i: parameter to be printed
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}