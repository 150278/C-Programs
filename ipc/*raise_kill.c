#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sig_handler(int signum)
{
printf("Inside handler function\n");

}

int main()
{
pid_t pid;

signal(SIGUSR1,sig_handler);//register signal nadler 

printf("INSIDE main function\n");

pid=getpid();  //process id itself
kill(pid ,SIGUSR1); //send SIGUSR1 to inself

printf("INside main function\n");

return 0;
}
