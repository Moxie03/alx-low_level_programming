#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer to be checked
 * Return 1 if c is uppercaase, otherwise 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
