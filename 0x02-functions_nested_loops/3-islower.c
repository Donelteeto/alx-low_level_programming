#include "main.h"

/**
 * _islower - prints lower case
 *
 * Return: 1 if its a lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
