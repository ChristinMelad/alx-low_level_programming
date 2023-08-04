#include "main.h"

/**
* _isdigit - check if input is digit number between 0-9.
*
*@c: char to check
*
*Return: 1 if it's digit, 0 if not.
*/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
	return (1);
	}
else
{
return (0);
}
}
