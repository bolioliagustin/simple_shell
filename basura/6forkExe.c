#include "lib.h"


int main(char *argv, char **ar) 
{
        pid_t pid = 0;
        pid = fork();
	int status;
	argv = NULL;
	
	if (pid == 0) {
		execve("/bin/ls", ar, NULL); // A new program(ls executable is loaded into memory and executed
		execve("/bin/", ar, NULL);
	        execve("/usr/bin/", ar, NULL);
 		execve("/sbin/", ar, NULL);
 		execve("/usr/sbin/", ar, NULL);
 		execve("/usr/local/bin/", ar, NULL);	
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
