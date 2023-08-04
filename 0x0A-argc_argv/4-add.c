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
int main(int argc, char **argv)

{
int sum = 0;
int i;

for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
