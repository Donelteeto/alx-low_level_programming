#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/*
 * create_array - function that creates an array of characters
 * @size: size of the memory to print
 * @c: address of char/memory to print
 * This function dynamically allocates memory for an array of characters
 * of size 'size' and initializes each element with the character 'c'.
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptrZ;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	ptrZ = (char *)malloc(size * sizeof(char));

	if (ptrZ == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		ptrZ[b] = c;
	}
	return (ptrZ);
}
