#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char char_type;
	int int_type;
	long int long_int;
	long long int long_long_int;
	float float_type;
	printf("size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("size of a long int: %zu byte(s)\n", sizeof(long_int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long_long_int));
	printf("size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
