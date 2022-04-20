#include <stdio.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
int main() 
{
 pid_t pid1;

int option,stat;

while(1)
{

printf("enetr 1 to exec 'ls' program in child process \n");
scanf("%d",&option);
if(!option)
   exit(0);
printf("\n");
if(fork()==0)
{
execl("/bin/ls","ls",0);
//printf("enetr 0 to exec 'ls' program in child process \n");
exit(0);
}
}
}
