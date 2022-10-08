#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - Concatenates two strings using at
 *most an inputted number of bytes.
 *@s1: The first string.
 *@s2: The second string.
 *@n: The maximum number of bytes of s2 to concatenate to s1.
 *
 *Return: If the function fails - NULL.
 *Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	for (index = 0; s1[index]; index++)
		len++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	concat = malloc(sizeof(char) * (len + 1));
	if (!s)
	if (concat == NULL)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	len = 0;

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];
	s[i] = '\0';
	concat[len] = '\0';
	return (s);
	return (concat);
}
