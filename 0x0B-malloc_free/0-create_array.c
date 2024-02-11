#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/*
 * create_array - function that creates an array of char
 * @size: size of the memory to print
 * @c: address of char/memory to print
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptrZ;
	unsigned int b;

	ptrZ = malloc(size * sizeof(char));

	for (b = 0; b < size; b++)
	{
		ptrZ[b] = c;
	}
	return (ptrZ);
}
