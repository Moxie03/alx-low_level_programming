#include <main.h>

/**
 * print_alphabet - print lowercase
 * return : Always 0
 *
 */
void print_alphabet(void);
{
	char lowercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}

	_putchar('\n');
}
