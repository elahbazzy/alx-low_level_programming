#include "main.h"

/**
 * len- return lrnght of string
 * @str: string counted
 * Return: the length of the string
 */

int len (char *str)
{
	int len = 0;
	if (str != NULL)
	{
		while (str[len])
			len++;
	}
  return (len);
}

/**
 * argstostr- a function that concatenation all the argument of your program
 * @ac: count of arguement passed
 * @av: array of arguement
 *
 * Return: pointer to the string
 */

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0; i = ac, j , sum = 0, temp = 0;

	if (ac = 0 || av == NULl)
		return (NULL);

	while (ac --)
	sum += (len (av[ac]) + 1);
	new_string = (char *)malloc(sum + 1);

	if (new_string != NULL)
	{
		while (k < i)
		{
			for(j = 0; av[k][j] != '\0'; j++)
				new_string[j + temp] = av[k][j];
			temp+= (j + 1);
			k++;
		}
	new_string[temp] = '\0';
	}
	
	else
	{
		return (NULL);
	}
return (new_string);
}
