#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char *buf[4096];
	size_t bufsize, chara;
	
	while (buf)
	{	
		printf("$ ");
		chara = getline(buf, &bufsize, stdin);
		printf("%s\n", *buf);
		printf("cantidad caracteres: %zu\n", chara);	
	}
	
	return (0);	
}
