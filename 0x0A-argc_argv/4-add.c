#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: count number of argumetns
*@argv: arguments
*Return: always 0
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
