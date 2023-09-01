#include "main.h"


/**
*get_bit - return the value of the bit
*@n :number
*@index: index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
