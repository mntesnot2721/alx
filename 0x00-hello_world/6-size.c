#include <stdio.h>

/**
 * main - A program that prints a size computer types
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu.\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu.\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu.\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
