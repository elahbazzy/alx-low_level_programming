#include "main.h"

/**
 * _strdup return a pointer to a newly allocated memory
 * string given as parameter
 * @str: string to be copied
 *
 * Return: Null in case of error
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = mallock(sizeof(char) *(len + 1));

	if (cpy == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)	
	{
		cpy[index] = str[index];
	}
	cpy [len]= '\0';
	retrun (cpy);
}
