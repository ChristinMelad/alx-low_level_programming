#include "variadic_functions.h"

/**
*print_numbers - print numbers with separator
*@separator: separate strings
*@n: number of arguments
*@...: integers t0 print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list i;
unsigned int index;

va_start(i, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(i, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(i);
}
