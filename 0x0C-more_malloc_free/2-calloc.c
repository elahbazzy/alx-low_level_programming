#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	while (n--)
	*s++ = b;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (ptr);

	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (size == 0 || nmemb == 0)
	return (NULL);

	m = malloc(sizeof(int) * nmemb);
	ptr = malloc(size * nmemb);

	if (m == 0)
	return (NULL);
	if (ptr == NULL)
		return (NULL);

	_memset(m, 0, nmemb * sizeof(int));
	_memset(ptr, 0, nmemb * size);

	return (m);
	return (ptr);
}
