#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char r;
	char R;

	for (r = 'a'; r <= 'z'; r++)
		putchar(r);
	for (R = 'A'; R <= 'Z'; R++)
		putchar(R);
	putchar('\n');

	return (0);
}
