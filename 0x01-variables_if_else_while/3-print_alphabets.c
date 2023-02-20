#include <stdio.h>

/**
 * main program that prints alphabets in lowercase and uppercase
 *
 * Return: 0 always
 */

int main(void)
{
	char r;

	for (r = 'a' ; r <= 'z' ; r++)
		putchar(r);
	for (r = 'A' ; r <= 'Z' ; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
