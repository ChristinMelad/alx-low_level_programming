#include "main.h"

/**
*print_numbers - prints 0 to 9.
*using _putchar twice only
*Return: 0 always (success)
*/
void print_numbers(void)
{
int num = 0;

while (num < 10)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
