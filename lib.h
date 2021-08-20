#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

extern char **environ;

int qStrtok(char *c);
int qStrtokPath(char *c);
char **strD2(char *c);
char **strD2Path(char *c);
//char **strD3(char *c, char sep);
char *getPath();
char *str_concat(char *s1, char *s2);
char **getEnviron();
char *compEnv(char * c);
