#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
char rv;
for (rv = 'z'; rv >= 'a'; rv--)
{
putchar(rv);
}
putchar('\n');
return (0);
}
