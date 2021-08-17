#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
/*int main(int ac, char **av)
{
	char *buf[4096];
	size_t bufsize, chara;
	char *tok;
	
	while (buf)
	{	
		printf("$ ");
		chara = getline(buf, &bufsize, stdin);
		tok = strtok(*buf, " ");
		while (tok)
		{	
			printf("%s\n", tok);
			tok = strtok(NULL, " ");
		}

		printf("cantidad caracteres: %zu\n", chara);	
	}	
	return (0);	
}*/

#include "lib.h"
int qStrtok(char *c)
{
       char *tok;
       int i = 0;
	
       if (c)
       {
       tok = strtok(c, " ");
       if (tok)
       {
                while (tok)
                {
                        i++; 
			tok = strtok(NULL, " ");
                }
       }
       }
        return (i);
}

#include "lib.h"
int main(int ac, char **av)
{
	char *buf[4096];
	size_t bufsize, chara;
	int q;
	char *arrayP;

	while (buf)
	{
		printf("$ ");
		chara = getline(buf, &bufsize, stdin);
		q = qStrtok(*buf);
		printf("qStrtok: %d\n", q);

	printf("cantidad caracteres: %zu\n", chara);
	}
	return (0);
}

