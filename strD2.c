#include "lib.h"

char **strD2(char *c)
{
        char **strD;
	char *copy;
        char *tok;
        int i = 0, j = 0, k = 0;

        for (; c[j]; j++)
                ;
        copy = malloc(sizeof(char) * j);

        strcpy(copy, c);
        if (c)
        {
		int q = qStrtok(c);

		strD = malloc(sizeof(char *) * q);
		if(!strD)
			return (NULL);

                 tok = strtok(copy, " ");
                 if (tok)
                 {
                         while (tok)
                         {
                                 int len = strlen(tok);

				 strD[k] = malloc(sizeof(char) * len);
				 if (!strD)
					 return (NULL);

				 strcpy(strD[k], tok);

                                 tok = strtok(NULL, " ");
				 k++;
                         }
                 }
        }

        free(copy);
        return (strD);
}

int main (void)
{
	char **d;
	char *c = "perro    malo    %";
	int q = qStrtok(c);
	printf("en el main q da: %d\n", q);

	d = strD2(c);

	for (int i = 0; i < q ; i++)
	{
		printf("strD[%d]: %s\n", i, d[i]);
		printf("el lardo de la palabra es: %ld\n", strlen(d[i]));
	}
	return (0);
}
