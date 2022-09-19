#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps two integers' values
*@a: first integer
*@b: second integer
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int bat = *a;
	*a = *b;
	*b = bat;
}

