#include <stdio.h>
/**
 * main :Entry point
 * with a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	float e;
	long long int d;
	long int c;
	char a;


	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
	return (0);

}
