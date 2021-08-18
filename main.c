#include "lib.h"

int main(void)
{
	
	char *buf;
	size_t bufsize, chara;
	int q = 0;
	char **doub;
	int qq = 0;
	char *path;
	while (1)
	{
	
		printf("$ ");
		//chara = getline(&buf, &bufsize, stdin);

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

		printf("%s\n", getPath());
		
		//-----------		
		qq = qStrtokPath(getPath());

		printf("EL PATH TIENE %d TOKENS\n", qq);

		for (int gg = 0; strD2Path(getPath())[gg]; gg++)
			printf("DP [%d]: %s\n", gg, strD2Path(getPath())[gg]);
		//----
		
		printf("Array: %s\n", str_concat(doub[0], strD2Path(getPath())[2]));

	}
	return (0);
}
