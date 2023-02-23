#include "main.h"

/**
 * _islower - prints lower case
 * @c: parameter to be printed
 *
 * Return: 1 if its a lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
