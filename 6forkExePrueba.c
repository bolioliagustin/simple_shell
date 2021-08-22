#include "lib.h"


int executen(char **d, char **a) 
{
	int i = 0;

	pid_t pid = 0;
	pid = fork();
	int status;

	if (pid == 0) {
		for (i = 0; d[i]; i++)
			execve(d[i], a, NULL);
	}
		wait(&status);
   		printf("Child Complete\n");

	return 0;
}
