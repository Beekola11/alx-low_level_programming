#include <stdio.h>

/**
 *main -  program that prints all the numbers of base 16 in lowercase
 *You can only use the putchar function
 *Return: 0
 */

int main(void)
{
int x;
char words;
for (x = 0; x < 10; x++)
{
putchar((x % 10) + '0');
}
for (words = 'a'; words <= 'f'; words++)
{
putchar(words);
}
putchar('\n');
return (0);
}
