#include "lib.h"

char *getPath()
{
	return(environ[12] + 5);
}
