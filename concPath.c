#include "lib.h"

char **concPath(char **p, char *s)
{
	int i = 0, lenp = 0, lens = 0;
	char *tmp;
	

	lens = _strlen(s);

	for (; p[i]; i++)
	{

		lenp = _strlen(p[i]);
		//printf("lenP: %d\n", lenp);
		lenp = lenp + lens;
		//printf("lenP + lenS: %d\n", lenp);
		tmp = str_concat(p[i], s);
		//printf("tmp: %s\n", tmp);

		p[i] = malloc(sizeof(char) * (lenp + 1));
		if(!p[i])
			return (NULL);
		
		_strcpy(p[i], tmp);
		str_concat(p[i], s);
		//printf("p[%d]: %s\n", i, p[i]);
		lenp = 0;
		free(tmp);
	}
	
	return(p);
}

