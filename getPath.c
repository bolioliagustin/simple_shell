#include "lib.h"
/**
  * getPath - Get the PATH without de "PATH="
  * Return: The Path without "PATH="
  */
char *getPath()
{
	int len = strlen(environ[12] + 5);

	char *env = malloc(sizeof(char) * len);

	env = environ[12] + 5;

	return (env);
}
