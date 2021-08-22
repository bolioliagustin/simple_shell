#include "lib.h"


int main() 
{
	char *direcciones[] = {"/usr/local/sbin/ls","/usr/local/bin/ls","/usr/sbin/ls","/usr/bin/ls","/sbin/ls","/bin/ls", NULL};
	char *argumentos[] = {"ls", "-l", "-a", NULL};
	
	printf("Soy papito1: %u\n", getppid());
	printf("Soy hijito1: %u\n", getpid());
        //pid_t my_pid;
	//my_pid = getpid();
        pid_t pid = 0; 
	pid = fork();
	int status;
	///argv = NULL;
	
	printf("Soy papito2: %u\n", getppid());
	printf("Soy hijito2: %u\n", getpid());
	if (pid == 0) {
		/*execve(direcciones[0], argumentos, NULL); // A new program(ls executable is loaded into memory and executed
		execve(direcciones[1], argumentos, NULL);
	        execve(direcciones[2], argumentos, NULL);
 		execve(direcciones[3], argumentos, NULL);
 		execve(direcciones[4], argumentos, NULL);
 		execve(direcciones[5], argumentos, NULL);*/
		printf("en que procesos estoy manito1 ?? ----> %u\n", pid);
		for (int i = 0; direcciones[i]; i++)
			execve(direcciones[i], argumentos, NULL);
		printf("en que procesos estoy manito2 ?? ----> %u\n", pid);
	}
		wait(&status);
		printf("en que procesos estoy manito3 ?? ----> %u\n", pid);
   		printf("Child Complete\n");
	

	return 0;
}

/*
int main(void)
{
	char *direcciones[] = {"/usr/local/sbin/ls","/usr/local/bin/ls","/usr/sbin/ls","/usr/bin/ls","/sbin/ls","/bin/ls", NULL};
	char *argumentos[] = {"-l","-a", NULL};

	for (int i = 0; direcciones[i]; i++)
		printf("%s\n", direcciones[i]);

	for (int j = 0; argumentos[j]; j++)
		printf("%s\n", argumentos[j]);

	return (0);
}
*/
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
