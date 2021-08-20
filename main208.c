#include "lib.h"

int main(void)
{
	
	char *buf;
	size_t bufsize, chara;
	int q = 0;
	char **doub;
	int qq = 0;
	char *simp;
	char **simpD;

	char *
	//---
	//char *path = getPath();
	//---
	//char *path;
	
/*	buf = malloc(sizeof(char) * bufsize);
	if (!buf)
		return (0);
*/
	buf = (char *)malloc(bufsize * sizeof(char));

	while (1)
	{
	
		write(1,"$ ",2);
		//chara = getline(&buf, &bufsize, stdin);

	/*	buf = malloc(sizeof(char *) * bufsize);
		if (!buf)
			return (0);
	*/	
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

		printf("%s\n", getPath());
		
		//-----------		
		simp = compEnv("PATH");

		qq = qStrtokPath(simp);

		printf("EL PATH TIENE %d TOKENS\n", qq);

		simpD = strD2Path(simp);

		for (int gg = 0; simpD[gg]; gg++)
			printf("DP [%d]: %s\n", gg, simpD[gg]);
		//----
		
		//printf("%s\n", strD2Path(getPath())[2]);
		printf("%s\n", doub[0]);
		printf("Array: %s\n", str_concat(simpD[2], doub[0]));

		
		//printf("%s\n", str_concat(strD2Path(getPath())[2], doub[0]));
	}
	return (0);
}
