#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
#include<stdio.h>

void printSignalSet(sigset_t *set)
{
const int sigList[]={SIGHUP,SIGINT,SIGQUIT,SIGILL,SIGABRT,SIGFPE,SIGKILL,SIGSEGV};

const char *sigNames[]={"SIGHUP","SIGINT","SIGQUIT","SIGKILL","SIGABRT","SIGFPE","SIGKILL","SIGSEGV"};

const int sigLen =8;



for(int i=0;i<sigLen;i++)
{
int ret=sigismember(set,sigList[i]);
if(ret==-1)
{
perror("sigismember:");
exit(EXIT_FAILURE);
}

else if(ret==1)
{
printf("signal %s=%d is in thre set \n",sigNames[i],sigList[i]);
}
else
{
printf("signal %s=%d is not in the set\n",sigNames[i],sigList[i]);
}
}
}



int main(void)
{

sigset_t  set;

if(sigprocmask(0,NULL,&set)!=0)
{
perror("sigpromask");
exit(EXIT_FAILURE);
}

printf("_----Initial signal mask for this process---\n");
printSignalSet(&set);



if(sigaddset(&set,SIGINT)!=0)
{
perror("sigaddset:");

exit(EXIT_FAILURE);
}


printf("-----NEW signal mask for this process--\n");

printSignalSet(&set);


int secToSleep=20;

printf("Try ctrl+c try killing this program with kill  -kill %d .. going to sleep for %d seconds . going to sleep for seconds\n",getpid(),secToSleep);

sleep(secToSleep);
printf("sleep return\n");

printf("removing all signal from mask\n");
sigemptyset(&set);



sigprocmask(SIG_SETMASK,&set,NULL);

printSignalSet(&set);

sleep(1);

printf("Exited normally\n");
return 0;

}
