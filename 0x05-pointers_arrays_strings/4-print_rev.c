#include "main.h"

/**
*print_rev - Prints a string in reverse
*@s: The string to print
*
*Return: void
*/

void print_rev(char *s)
{
	int c = 0;

	while (s[c])
	c++;
	while (c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
