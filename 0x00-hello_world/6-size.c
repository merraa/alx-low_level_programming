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
       
       	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char_type));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int_type));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_int));
	printf("size of a long long int: %lu byte(s)\n",(unsigned long) sizeof(long_long_int));
	printf("size of a float: %lu byte(s)\n",(unsigned long) sizeof(float_type));
	return (0);
}
