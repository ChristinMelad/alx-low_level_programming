#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
*print_all - print everthing
*@format: list types of arguments
*/

void print_all(const char * const format, ...)
{

int i;
char *str;
char *space;
va_list ap;

va_start(ap, format);
i = 0;
while (format && format[i])
{
space = "";
if (format[i + 1])
space = ", ";
switch (format[i])
{
case 'c':
printf("%c%s", va_arg(ap, int), space);
break;
case 'i':
printf("%d%s", va_arg(ap, int), space);
break;
case 'f':
printf("%f%s", va_arg(ap, double), space);
break;
case 's':
str = va_arg(ap, char *);
if (!str || !*str)
str = "(nil)";
printf("%s%s", str, space);
break;
}
i++;
}
printf("\n");
}
