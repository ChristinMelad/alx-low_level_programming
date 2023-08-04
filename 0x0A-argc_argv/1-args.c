#include "main.h"
#include <stdio.h>

/**
*main: print number of arguments
*@argc: count the number of arguments
*@argv: pointer to an array of command line arguments
*return: 0 (success)
*/

int main(int argc, char *argv[])
{
(void)argc;
printf("%d\n", argc - 1);
return (0);
}
