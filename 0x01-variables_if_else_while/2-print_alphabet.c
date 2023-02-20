#include <stdio.h>

/**
 * main - program that prints alphabet in lowercase
 *
 * Return: 0 upon success
 */

int main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
