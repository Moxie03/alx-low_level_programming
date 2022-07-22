#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Strings to count
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
