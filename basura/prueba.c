#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 10 

void main()
{
	char **ptr;
	char buffer[1024], *p;
	int i = 1, j , k , *frec, c;

	printf("Ingrese texto separado en oraciones (terminar en .): \n");
	gets(buffer);

	p = strtok(buffer, ".");
	ptr = (char **)malloc(MAX * sizeof(char *));

	if (ptr == NULL)
	{
		printf("operacion incorrecta");
		return;
	}
	
	ptr[0] = (char *)malloc(strlen(p) + 1);

	strcpy(ptr[0], p);

	while (p = strtok(NULL, "."))
	{
		ptr[i] = (char *)malloc(strlen(p) + 1);
		strcpy(ptr[i], p);
		i++;
	}

	frec = (int *)calloc(256, sizeof(int));

	for(j = 0; j < i; j++)
		printf("%s\n", ptr[j]);

	for(j = 0; j < i; j++)
	{
		for(k = 0; (c = ptr[j][k]) != '\0'; k++)
		{
			frec[c]++;
			printf("Caracter \t\t Frecuencia\n");
		}
	}

	for(k = 0; k < 256; k++)
	{
		if(frec[k] > 0)
		{
			if(isalnum(k))
				printf("%c\t\t%d\n", k, frec[k]);
		}
		else
		{
			printf("%x\t\t%d\n", k, frec[k]);
		}
	}
}
