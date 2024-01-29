#include <stdio.h>

/**
 * main - print all arguments
 * @argc: this is the count of all arguments
 * @argv: this is the size of the arguments
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	int i;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
