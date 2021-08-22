#include "lib.h"

char *getPath()
{
	int len = strlen(environ[12] + 5);

	char *env = malloc(sizeof(char) * len);

	env = environ[12] + 5;

	return(env);
}
