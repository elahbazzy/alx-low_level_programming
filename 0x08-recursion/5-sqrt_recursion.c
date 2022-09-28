#include "main.h"

/**
 * check_int - checks integer as candidate for square root
 * @square: square integer
 * @x: integer
 * Return:the square root of n
 */

int _sqrt_recursion(int n) 
{
	if (n == 1 || n == 0 )
		return (n);
	return (_sqrt(0, n);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if(n > x/2)
		return (-1);
	else if (n * n ==x)
		return (1);
	return (_sqrt(n + 1, x));
}

