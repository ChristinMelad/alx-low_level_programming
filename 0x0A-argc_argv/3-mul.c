#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - prints result of the multiplication, followed by a new line.
*@argc: number of arguments.
*@argv: arguments.
*Return: 0 success, else error and return 1.
*/

int main(int argc, char *argv[])

{
	int result;

if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
