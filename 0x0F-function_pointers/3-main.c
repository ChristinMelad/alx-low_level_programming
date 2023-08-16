#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - Entry point
*@argc: number of arguments
*@argv: value of arguments
*Return: 0 if success, 98, 99 or 100 if error
*/

int main(int argc, char *argv[])
{
int a, b;
char *op;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

a = atoi(argv[1]);
op = argv[2];
b = atoi(argv[3]);

if (get_op_func(op) == NULL || op[10] != '\0')

{
	printf("Error\n");
	exit(99);
}

if ((*op == '/' && b == 0) || (*op == '%' && b == 0))

{
	printf("Error\n");
	exit(100);
}

printf("%d\n", get_op_func(op)(a, b));
return (0);
}
