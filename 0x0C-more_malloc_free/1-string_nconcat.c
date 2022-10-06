#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * string_nconcat - function that concatenates two strings.
 *
 * Return: pointer to the resulting string
 * @s1: first string
 * @s2: second string
 * @n: memory size
 *
 * Return: a pointer to the string array of the 2 strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *s3;
	unsigned int i, len1, len2, total_len;

	while (s1 && s1[len1])
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	while (s2 && s2[len2])

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
		n = len2;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));

	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	total_len = len1 + n;

	if (!s)
	s3 = malloc(sizeof(char) * (total_len + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	for (i = 0; i < n; i++)
		s3[len1 + i] = s2[i];
	s3[len1 + i] = '\0';

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
	return (s3);
}
