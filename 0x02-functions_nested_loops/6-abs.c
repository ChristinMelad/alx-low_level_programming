#include "main.h"

/**
*int _abs - computes the absolute value of an integer.
*
*@n: the number to be computed
*
*Return: always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
	n = (-1) * n;
	return (n);
}
