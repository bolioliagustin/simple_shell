#include "lib.h"
char **getEnviron()
{
	int i = 0, j = 0, len;
	char **envT;

	for(; environ[i]; i++)
		;

	envT = malloc(sizeof(char *) * i);

	for(; j < i; j++)
	{	
		len = strlen(environ[j]);
		envT[j] = malloc(sizeof(char) * len);
		strcpy(envT[j], environ[j]);
		len = 0;
	}
	return(envT);
}

int main(void)
{
	int i = 0;

	char **p = getEnviron();
	
	printf("%s\n", p[12]);

	return(0);
}
