#include "main.h"

/**
*print_line - prints a straight line
*@n:is the number of times the _ should be printed
*/

void print_line(int n)
{
int lnchr;
if (n <= 0)
_putchar('\n');
else
{
for (lnchr = 1; lnchr <= n; lnchr++)
_putchar('95');
_putchar('\n');
}
}
