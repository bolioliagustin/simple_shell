#include "lib.h"

int toker(char *buffer)
{
	char *string, *copy;
	int a, b = 0;
	
	for (a = 0; buffer[a] != '\0'; a++)
		;
	copy = malloc(sizeof(char *)*a);
	strcpy(copy, buffer);
	string = strtok(copy, " ");
	while (string != NULL)
		{
			printf("Token %d is: %s\n", b, string);
			b++;
			string = strtok(NULL, " ");
		}
	free(copy);
	if (!buffer)
		return(-1);
return (b);
}

int main(void)
{
	int p = toker("mi perrro    dinamita");
	
	printf("%d\n", p);

	return (0);
}
