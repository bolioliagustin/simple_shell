#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int doSomething(void)
{
	int ret;

	srand(getpid());
	ret = (rand() % 236);
	printf("HIJO: PID = %d, valor aleatorio calculado %d \n", getpid(), ret);

	return ret;
}

int main(void)
{
	int i = 0, status = 0;
	pid_t pidC;

	for(; i < 5 ; i++)
	{
		pidC = fork();
		if (pidC > 0)
		{
			continue;
		}
		else if (pidC == 0)
		{
			exit(doSomething());
		}
		else
		{

		}
	}

	for (i = 0; i < 5 ; i++)
	{
		pidC = wait(&status);
		printf("PADRE: PID = %d, HIJO DE PID = %d terminado, st = %d \n", getpid(), pidC, pidC);
	}

	while (1)
	{
		sleep(10);
	}
	return (0);
}
