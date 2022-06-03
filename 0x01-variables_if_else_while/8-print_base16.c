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
	int d;
	char me;

	for (d = '0'; d <= '9'; d++)
	       putchar(d);
	for (me = 'a'; me <= 'f'; me++)
		putchar(me);
	putchar('\n');

	return (0);
}
