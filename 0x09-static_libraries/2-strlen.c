#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer
 * Return: void
 */

int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		k++;
	return (k++);
}
