#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @a: parameter to be printed
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (a < 0)
		b = -b;
	return (b);
}
