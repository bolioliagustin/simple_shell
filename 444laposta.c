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
 	char *copy = c;
	char *tok;
       int i = 0;
	
       if (c)
       {
       tok = strtok(copy, " ");
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
	char *tok;
	int len = 0;
	char *strMal;
	int i = 0, j = 0;
	while (buf)
	{
		printf("$ ");
		chara = getline(buf, &bufsize, stdin);
		
/*		q = qStrtok(*buf);
		printf("qStrtok: %d\n", q);*/

		tok = strtok(*buf, " ");
		while (tok)
                {
			len = strlen(tok);
			strMal = (char *)malloc(sizeof(char) * len);
			strMal = tok;

			printf("el largo de la palabra es: %d\n", len);
			printf("palabra: %s\n", tok);

			for (i = 0; i < len; i++)
			{
				printf("StrMal[%d] es %c\n", i, strMal[i]);
			}

			i = 0;

/*			for (j = 0; j < len; i++)
				free(strMal[j]);	*/

			tok = strtok(NULL, " ");
                }	
		
	/*	q = qStrtok(*buf);
		printf("qStrtok: %d\n", q);*/

		printf("cantidad caracteres: %zu\n", chara);
	}
	return (0);
}

