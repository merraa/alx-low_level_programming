#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *a;

	va_start (arg, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg (arg, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if ((separator != NULL && i < n - 1))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
