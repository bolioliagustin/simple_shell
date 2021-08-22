#include "lib.h"
/**
 * *_strcpy - string copy
 * @dest:char
 * @src:char
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - lenght
 * @s:char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		continue;
	}

	return (i);
}

