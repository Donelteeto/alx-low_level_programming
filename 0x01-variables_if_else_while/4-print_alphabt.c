#include <stdio.h>

/**
 *main - program that prints alphabet in lowercase except q & e
 *
 * Return: 0 always
 */

int main(void)
{
	char d;

	for (d = 'a' ; d <= 'z' ; d++)
		if (d != 'q' && d != 'e')
			putchar(d);
	putchar('\n');
	return (0);
}
