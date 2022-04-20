#include<stdio.h>
#include<signal.h>

void sighand(int signum)
{
printf("Interrpt signal rec d.. but no terminaltion on ctrl+c\n");

signal(SIGINT,SIG_DFL);


}


int main()
{
int i;
//signal (SIGINT,SIG_DFL);
//while(1)
{
}


signal(SIGINT,sighand);

for(i=0;;i++)
{
printf("%d\n",i);

sleep(0);
//return 0;
}
}
