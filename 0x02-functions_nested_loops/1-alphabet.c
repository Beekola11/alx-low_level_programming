#include "main.h"

/**
 *print_alphabet - utilizes on the _putchar function to print
 *the alphabet a - z
 *Return: 0 (success)
 */

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
	_putchar('\n');
}


