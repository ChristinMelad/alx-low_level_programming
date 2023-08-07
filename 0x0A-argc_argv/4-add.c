#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - Entry point
*@argc: count number of argumetns
*@argv: arguments
*Return: 0 if no number is passed to the program, if no digit print Error
*/
int main(int argc, char *argv[])

{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
return (1);
	}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}