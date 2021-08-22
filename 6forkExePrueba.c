#include "lib.h"


int executen(char **d, char **a) 
{
	//char *direcciones[] = {"/usr/local/sbin/ls","/usr/local/bin/ls","/usr/sbin/ls","/usr/bin/ls","/sbin/ls","/bin/ls", NULL};
	//char *argumentos[] = {"ls", "-l", "-a", NULL};
	
        pid_t pid = 0; 
	pid = fork();
	int status;
	
	if (pid == 0) {
		for (int i = 0; d[i]; i++)
			execve(d[i], a, NULL);
	}
		wait(&status);
   		printf("Child Complete\n");
	

	return 0;
}
