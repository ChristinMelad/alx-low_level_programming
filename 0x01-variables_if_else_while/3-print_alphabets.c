#include <stdio.h>

/**
*main - entry point.
*Description: print alphabet letters in lowercase then in uppercase
*Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
char CH = 'A';

/*print a-z*/
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}

/*print A - Z*/
while (CH <= 'Z')
{
	putchar(CH);
	CH++;
}
	putchar('\n');

	return (0);
}
