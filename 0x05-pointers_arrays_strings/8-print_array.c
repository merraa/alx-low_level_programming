#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n - 1)
			printf(", ");
	}
	printf("\n");
}
