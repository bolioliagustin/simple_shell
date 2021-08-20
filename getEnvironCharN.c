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

char *compEnv(char *c)
{
	int i = 0, flag = 0, len = 0;
	char *pa;
	char **p = getEnviron();

	len = strlen(p[12] + 5);
	
	pa = malloc(sizeof(char) * len);
		
	strcpy(pa, p[12] + 5);

	return (pa);
}

/*
int main(void)
{
	int i = 0;

	char **p = getEnviron();
	char *pa = compEnv("PATH");
	printf("%s\n", p[12] + 5);
	printf("%s\n", pa);
	
	
	return(0);
}*/
