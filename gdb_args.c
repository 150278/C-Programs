#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int i;

printf("\n file name: %s\n", argv[0]);
printf("\n total number of argument %d\n", argc);
printf("\n argument:");

for(i=1;i<argc;i++)
     printf("%s",argv[i]);

printf("\n");
}
