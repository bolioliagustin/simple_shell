#include "lib.h"

int main(void)
{
	
	char *buf;
	size_t bufsize, chara;
	int q = 0;
	char **doub;
	int qq = 0;
	char *pat;
	int lenpat;
	char **patt;

	lenpat = strlen(environ[12] + 5);
	printf("environ tiene %d chars\n", lenpat);
	qq = qStrtokPath(environ[12] + 5);
	printf("EL PATH TIENE %d TOKENS\n", qq);
	
	while (1)
	{
	
		printf("$ ");

		buf = malloc(sizeof(char) * bufsize);
		if (!buf)
			return (0);
		
		chara = getline(&buf, &bufsize, stdin);
		
		if((buf[chara - 1]) == '\n')
			buf[chara - 1] = 0;
			
		//AGREGAR FUNCION STRCMP
		int t = strcmp(buf, "EOF");
		
		if (t == 0)
			return (-1);

		q = qStrtok(buf);
		
		doub = strD2(buf);
		printf("compare: %d\n", t);
		printf("cantidad de tokens: %d\n", q);

		for (int h = 0; h < q; h++)
			printf("doub[%d]: %s\n", h, doub[h]);

		//printf("%s\n", path);
		
		//-----------		
		
		//patt = strD2Path(environ[12] + 5);
		//for (int gg = 0; strD2Path((environ[12] + 5))[gg]; gg++)
		//	printf("DP [%d]: %s\n", gg, strD2Path((environ[12] + 5))[gg]);
		//----
		
		//for (int gg = 0; patt[gg]; gg++)
		//	printf("DP [%d]: %s\n", gg, patt[gg]);
		//printf("%s\n", strD2Path(getPath())[2]);
		//lenpat = strlen(environ[12] + 5);
		//pat = malloc(sizeof(char) * lenpat);

		//pat = environ[12] + 5;

		//printf("pat: %s\n", pat);
		printf("%d\n", lenpat);
		printf("%s\n", environ[12] + 5);
		printf("%s\n", doub[0]);
		//printf("Array: %s\n", str_concat((strD2Path(getPath()))[2], doub[0]));
		//printf("%s\n", str_concat(strD2Path(getPath())[2], doub[0]));
	}
	return (0);
}
