#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: characters in the array
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	int i;

	if (size <= 0)
		return (NULL);
	m = malloc(size * sizeof(char));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		m[i] = c;
	return (m);
}
