#include "main.h"

/**
*_islower - function checks if charcter is lowercase
*
*@c: the chacter to be chceked
*
*Return: returns 1 if c is lowercase
*        otherwise returns 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
