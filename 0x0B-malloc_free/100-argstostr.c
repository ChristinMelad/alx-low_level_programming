#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*argstostr - convert arguments to strings
*@ac: int
*@av: pointer
*Return: NULL if ac or av = 0 and NULL on fail
*/

char *argstostr(int ac, char **av)
{


char *result;
int length = 0, i = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

while (i < ac)
{
	b = 0;
	while (av[i][b] != '\0')
	{
		length++;
		b++;
	}
	i++;
}
length = length + ac + 1;

result = malloc(sizeof(char) * length);

if (result == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	for (b = 0; av[i][b] != '\0'; b++)
	{
		result[c] = av[i][b];
		c++;
	}
result[c] = '\n';
c++;
}
return (result);
}
