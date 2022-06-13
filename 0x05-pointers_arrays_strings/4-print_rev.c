#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	
	while (i)
		_putchar(s[--i]);
	
	_putchar('\n');
}
