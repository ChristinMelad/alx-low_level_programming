#include "main.h"


int _sqrt_helper(int n, int i);

/**
* _sqrt_recursion - returns the natural square root of a number
*@n: number to calulate
*Return: natural square root or -1 if n doen't have natural sqr
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_helper(n, 1));
}

/**
* _sqrt_helper - helps to check if i * i equal n
*@n: number to calulate
*@i: iretator
*Return: natural square root or -1 if n doen't have natural sqr
*/

int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
