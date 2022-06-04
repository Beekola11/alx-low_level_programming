#include <stdio.h>

/**
 *main -  program that prints all possible combinations of single-digit
 *Numbers must be separated by ,followed by a space
 *Numbers should be printed in ascending order
 *You can only use the putchar function
 *Return: 0
 */

int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
	continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}


