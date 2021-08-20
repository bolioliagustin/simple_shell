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
	int i = 0, flag = 0;

	char **p = getEnviron();

	char *pa = p[12];

	for (; c[i]; i++)
	{
		if (c[i] != pa[i])
		{
			flag++;
		}
	}

	if (flag == 0)
		return (pa);

}

int main(void)
{
	int i = 0;

	char **p = getEnviron();
	char *pa = compEnv("PATH");
	printf("%s\n", p[12] + 5);
	printf("%s\n", pa);
	
	
	return(0);
}
