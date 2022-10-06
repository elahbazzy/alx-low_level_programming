#include "main.h"
#include <stlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 * array_range - function that creates an array of integers.
 *
 * Return: pointer to newly allocated memory or Null if fails
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;
	int *arr, i, len;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);

	if (a == NULL)
	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i; i++, min++)

	for (i = 0; i < len; i++)
	{
		a[i] = min;
		arr[i] = min;
		min++;
	}
	return (a);
	return (arr);
}
