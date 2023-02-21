#include <stdio.h>

/**
 * main - possible combination of single digits
 *
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		if (c == 9)
			putchar(c + '0');
		else
		{
			putchar(c + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);

}
