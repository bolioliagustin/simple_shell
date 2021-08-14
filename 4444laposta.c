#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#include "lib.h"
/*char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}*/

#include "lib.h"
int qStrtok(char *c)
{
 	char *copy;
	char *tok;
       int i = 0, j = 0, k = 0;

	for (; c[j]; j++)
		;

	copy = malloc(sizeof(char) * j);
	
	strcpy(copy, c);
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

/* liberar memoria de copy */
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
	char *strMal, *bufCpy;
	int i = 0, j = 0;
	char **strD;
	while (buf)
	{
		printf("$ ");
		chara = getline(buf, &bufsize, stdin);
		

		q = qStrtok(*buf);
		printf("qStrtok: %d\n", q);
		
		strD = malloc(sizeof(char *) * q);
		if (!strD)
			return (0);
		
			tok = strtok(*buf, " ");
		while (tok)
                {
			len = strlen(tok);
			strMal = (char *)malloc(sizeof(char) * len);
			if (!strMal)
				return (0);
			
			strMal = tok;
			
			strD[j] = strMal;
			
			printf("el largo de la palabra es: %d\n", len);
			printf("palabra: %s\n", tok);

			for (i = 0; i < len; i++)
			{
				printf("StrMal[%d] es %c\n", i, strMal[i]);
			}
			
			j++;
			i = 0;

/*		liberar memoria de strMal	*/

			tok = strtok(NULL, " ");
                }	
		
		printf("El puntero doble tiene: ");
		for(int k = 0; k < q; k++)
			printf("%s, ", strD[k]);
		
		printf("\n");
		printf("cantidad caracteres: %zu\n", chara);
	}
	return (0);
}

