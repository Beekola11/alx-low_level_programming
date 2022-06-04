#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
char lower_c;
char upper_c;

for (lower_c = 'a'; lower_c <= 'z'; lower_c++)
{
putchar(lower_c);
}
for (upper_c = 'A'; upper_c <= 'Z'; upper_c++)
{
putchar(upper_c);
}
putchar('\n');
return (0);
}
