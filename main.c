#include "lib.h"

int main(void)
{
	char *buf;
	size_t bufsize, chara;
	int q = 0;
	char **doub;

	while (buf)
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

		printf("environ: %s\n", environ[12] + 5);
	}
	return (0);
}
