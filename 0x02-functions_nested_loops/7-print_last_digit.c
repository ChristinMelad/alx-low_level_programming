#include "main.h"

/**
*print_last_digit - prints tha last digit of number
*
*@n: the last number will be printed
*
*Return: last digit
*/

int print_last_digit(int n)

{

	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
