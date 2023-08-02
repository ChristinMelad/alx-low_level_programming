#include "main.h"


int is_prime_helper(int n, int i);

/**
*is_prime_number - Returns if a number is prime
*@n: the number to be checked
*
*Return:1 if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
return (is_prime_helper(n, 1));
}

/**
*is_prime_helper - helping to Check if number is prime
*@n: the number to be checked
*@i: the iteration times
*
*Return: 1 for prime or 0 composite
*/

int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

if (n % i == 0 && i > 1)
return (0);

if ((n / i) < i)
return (1);

return (is_prime_helper(n, i + 1));
}
