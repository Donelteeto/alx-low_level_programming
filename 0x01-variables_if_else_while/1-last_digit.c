#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing another random number
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	printf("Last digit of %d is %d", n, c);
	if (c > 5)
	{
		printf(" and is greater than 5");
	}
	if (c == 0)
	{
		printf(" and is 0");
	}
	if (c < 6 && c != 0)
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
