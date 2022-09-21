#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares pointers to string
 * @s1 -apointer to the first string to be compared
 * @s2 - A pointer to the second string to be compared
 *
 * Return: If str1 < str 2, the negative difference of the first unmatched char
 *         If str1 == str2, 0.
 *         If str 1 > str2, the posituve differnce of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	return (*s1 - *s2);
}
