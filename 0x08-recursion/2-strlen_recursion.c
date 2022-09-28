#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: integer length
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum = sum + _strlen_recursion(s + 1);
	}
		return(sum);
}

