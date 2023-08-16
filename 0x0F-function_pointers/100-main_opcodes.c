#include <stdlib.h>
#include <stdio.h>

/**
*main - prints its opcodes
*@argc: arg counter
*@argv: array of pointers
*Return: 0 , 1 if argc not right, 2 if bytes is -ve
*
*/

int main(int argc, char *argv[])

{
int bytes, i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}


for (i = 0; i < bytes; i++)
{
printf("%02hhx", *((char *)main + i));

if (i < bytes - 1)
{
printf(" ");
}
else
{
printf("\n");
}
return (0);
}
}
