#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - program that prints the alphabet in lowercase, followed by a new line
 *You can only use the putchar
 *Return: 0
 */

int main(void)
{
char ch;

for (c = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
