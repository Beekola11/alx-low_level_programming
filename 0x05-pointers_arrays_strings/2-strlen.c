#include "main.h"

/**
 * _strlen - give the length of a string
 * @s: the string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
