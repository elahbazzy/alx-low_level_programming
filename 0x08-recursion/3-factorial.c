#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: integer
 *
 * Return: integer factorial
 */

int factorial(int n)
{
	int real_factorial;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	real_factorial = factorial(n - 1);
		return (n * real_factorial);
}
