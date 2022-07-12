#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, t;
	char *a, sci;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (t = 1; t < c; t++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		sci = s[i];
		s[i] = *a;
		*a = sci;
		a--;
	}
}
