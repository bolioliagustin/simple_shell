#include "lib.h"
void execute(char *cmd, char *argv[])
{
pid_t pid;
pid = fork();
if (pid == 0)
{
	execve("/bin/", argv, NULL);
	execve("/usr/bin/", argv, NULL);
	execve("/sbin/", argv, NULL);
	execve("/usr/sbin/", argv, NULL);
	execve("/usr/local/bin/", argv, NULL);
	fprintf(stderr, "command %s not found¥n", cmd);
	exit(1);
}
while (NULL);
}

