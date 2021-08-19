#include "lib.h"

char *getPath()
{
	//------------
	int len = strlen(environ[12] + 5);

	char *env = malloc(sizeof(char) * len);

	strcpy(env, (environ[12] + 5));

	return(env);
	//------------
	//return(environ[12] + 5);
}
