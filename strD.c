#include "lib.h"

char **strDouble(char *c)
{
	char *tok;
	int q = 0;
	char **strD;
	char *strMal;
	int len, i = 0, k = 0;
	
	if(c)
	{
		q = qStrtok(c);
		printf("qStrtok: %d\n", q);
		printf("%s\n", "arriba del malloc");

		strD = malloc(sizeof(char *) * (q + 1));
		printf("%s\n", "abajo del malloc");
		if (!strD)
			return (NULL);

		strD[q] = NULL;
		
		printf("%s\n", "arriba del tok");
		
		int f = strlen(c);

		for(int m = 0; m < f; m++)
			printf("c[%d] da: %c\n", m, c[m]);
		
		//printf("tok tiene antes: %s\n", tok);
		tok = strtok(c, " ");
		printf("%s\n", "abajo del tok");
		while (tok)
		{
			
			len = strlen(tok);
			printf("qStrtok: %d\n", len);

			strD[k] = malloc(sizeof(char) * len);
			if(!strD)
				return (NULL);
			
			//poner función _strcpy
			strcpy(strD[k], tok);
			
			tok = strtok(NULL, " ");
			k++;
		}

	}
	return (strD);
}


int main(void)
{
	char *c = "Perrito      malvado    %";
	int q = qStrtok(c);
	printf("En el main q da: %d\n", q);
	char **d;

	d = strDouble(c);

	for (int i = 0; i < q ; i++)
	{
		printf("strD[%d]: %s\n", i, d[i]);
		printf("El largo de la palabra es: %ld\n", strlen(d[i]));
	}

	return (0);
}
