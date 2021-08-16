#include "lib.h"


int main(char *argv, char **la) 
{
        pid_t pid = 0;
        pid = fork();
	int status;
	argv = NULL;
	
	if (pid == 0) {
		execve("/bin/ls", la, NULL); // A new program(ls executable is loaded into memory and executed
		execve("/bin/", la, NULL);
	        execve("/usr/bin/", la, NULL);
 		execve("/sbin/", la, NULL);
 		execve("/usr/sbin/", la, NULL);
 		execve("/usr/local/bin/", la, NULL);	
	}
		wait(NULL);
   		printf("Child Complete\n");
	

	return 0;
}


/*
void main(char *argv, char **la)
{
 pid_t pid = 0;
 int status;
 argv = NULL;

 pid = fork();
 if (pid == 0) {
 	execve("/bin/", la, NULL);
 	execve("/usr/bin/", la, NULL);
 	execve("/sbin/", la, NULL);
 	execve("/usr/sbin/", la, NULL);
 	execve("/usr/local/bin/", la, NULL);
 }
 while (wait(&status) != pid);
}
*/
