#include "lib.h"

char **strD2(char *c)
{
        char *copy;
        char *tok;
        int i = 0, j = 0, k = 0;

        for (; c[j]; j++)
                ;
        copy = malloc(sizeof(char) * j);

        strcpy(copy, c);
        if (c)
        {
                 tok = strtok(copy, " ");
                 if (tok)
                 {
                         while (tok)
                         {
                                 i++;
                                 tok = strtok(NULL, " ");
                         }
                 }
        }

        free(copy);
        return (i);
}
