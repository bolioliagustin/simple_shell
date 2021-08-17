#include "lib.h"

/*
char **strDouble(char *c)
{
	
}
*/


int main(void)
{
	char *tok;
	char *c = "Perrito      malvado    %";
	int h = strlen(c);
	tok = malloc(sizeof(char) * h);
	if (!tok)
		return (0);

	//strcpy(tok, c);

	int q = qStrtok(c);
	printf("En el main q da: %d\n", q);
	
	tok = strtok(c, " ");
	while (tok)
	{	
		printf("%s\n", tok);
		tok = strtok(NULL, " ");
	}


	//char **d;

	//d = strDouble(c);

	/*for (int i = 0; i < q ; i++)
	{
		printf("strD[%d]: %s\n", i, d[i]);
		printf("El largo de la palabra es: %ld\n", strlen(d[i]));
	}
	*/

	return (0);
}
