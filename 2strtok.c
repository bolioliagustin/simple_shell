#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av)
{
	char *buf[4096];
	size_t bufsize, chara;
	char *tok;

	while (buf)
	{	
		printf("$ ");
		chara = getline(buf, &bufsize, stdin);
		tok = strtok(*buf, " ");
		while (tok)
			printf("%s\n", tok), tok = strtok(NULL, " ");
		
		printf("cantidad caracteres: %zu\n", chara);	
	}	
	return (0);	
}
