#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char me;

	for (me = 'z'; me >= 'a'; me--)
		putchar(me);
	putchar('\n');

	return (0);
}
