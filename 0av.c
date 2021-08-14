#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	for(; av[i] ; i++)
	{
		printf("%s ", av[i]);
	}
	printf("\n");

	printf("El contador i de av te da: %d\n", i);
	printf("Ac te da: %d\n", ac);
	
	return (0);
}
