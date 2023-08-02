#include "main.h"

/**
*factorial- return the factorial of a given number
*@n: number to calculate factorial of
*
*Return: factorial of n, 0r -1 if n is negative number
*/

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
{
	return (1);
}
return (n * factorial(n - 1));
}
