#include "lib.h"

int main(void)
{
	char **doubP;
	int q2 = 0;
	char *path = getPath();

	printf("%s\n", path);
	
	q2 = qStrtokPath(path);

	doubP = strD2Path(path);

	printf("El PATH tiene %d tokens\n", q2); 

	for (int hh = 0; hh < q2; hh++)
		printf("doubP[%d]: %s\n", hh, doubP[hh]);

	return (0);
}
