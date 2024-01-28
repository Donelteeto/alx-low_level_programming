#include <stdio.h>
#include "main.h"

/**
 * main-this prints the program name
 * @argc: this prints the count of arguments passed to the program
 * @argv: this outputs the size of the argument
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
