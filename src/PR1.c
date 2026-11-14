#include "PR1.h"
#include <stdio.h>
#include<string.h>

void  PR1message(char *str)
{
    printf("%s\n",  str);
}
int messagesize(char *str)
{
    return strlen(str);
}
void printmessgeAndNumber(char *str)
{
    PR1message(str);
    printf("%d\n", messagesize(str));
}