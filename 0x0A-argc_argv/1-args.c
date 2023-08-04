#include "main.h"
#include <stdio.h>

/**
*main- print number of arguments
*@argc: count the number of arguments
*@argv: pointer to an array of command line arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
