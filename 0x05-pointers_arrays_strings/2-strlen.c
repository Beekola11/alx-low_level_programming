#include "main.h"

/**
 * _strlen - give the length of a string
 * @s: the string
 * Return: the length of a string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
