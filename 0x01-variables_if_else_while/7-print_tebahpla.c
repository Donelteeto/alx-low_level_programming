#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: 0 (As usual)
 */

int main(void)
{
	char u;

	for (u = 'z' ; u >= 'a' ; u--)
		putchar(u);
	putchar('\n');
	return (0);
}
