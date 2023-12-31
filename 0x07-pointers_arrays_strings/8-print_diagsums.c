#include "main.h"
#include <stdio.h>

/**
*print_diagsums - Entry point
*@a: input
*@size: size of matrix
*
*return: 0
*/

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
