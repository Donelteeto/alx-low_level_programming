#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints addition of numbers in a command line arg
 * @argc: this is the number of command line arguments
 * @argv: this is the array of strings in a command line arguments
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int k, l, sum = 0;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (!isdigit(argv[k][l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
