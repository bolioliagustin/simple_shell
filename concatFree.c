#include "lib.h"

/**
 * string_nconcat - concat
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2)
{
	char *concat;
	unsigned int len = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (j = 0; s2[j]; j++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
