#include "main.h"

/**
 * craete an array of char c, and 
 * initializes a particular char
 * @size: size of the array
 * @c: character to insert
 * Return : null if the program fails
 * pointer to the array if the program runs wwithout error
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for(index =0, index < size, index++)
		array[index] = c;

	return (array);
}

