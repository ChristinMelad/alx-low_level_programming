#include "main.h"

/**
*print_diagonal - draws a diagonal line
*@n:is the number of times diagonal line
*Return: empty
*/

void print_diagonal(int n)

{
int x, y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 1; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
