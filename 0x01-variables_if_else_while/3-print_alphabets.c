#include <stdio.h>

/**
*main - entry point.
*Description: print all the alphabet letters in lowercase then in upper case
*Return: 0 (Success)
*/

int main(void)
{
char ch = 'a';
char ch = 'A';

/*prints a-z*/
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
