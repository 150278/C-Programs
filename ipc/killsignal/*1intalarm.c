#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
#include<stdio.h>



//handler for SIGINT and SIGTERM



static void signal_handler(int signo)
{
if(signo == SIGINT)
printf("Caught SIGINIT!\n");

else if(signo == SIGALRM)
printf("Caught SIGALRM!\n");

else
{
printf("Caught SIGABRT!\n");
exit(EXIT_FAILURE);
}

exit(EXIT_SUCCESS);
}



int main(void)
{
//register signal_handler as our signal handler for SIGINIT.

if(signal(SIGINT,signal_handler)==SIG_ERR)
{
fprintf(stderr,"Cannot handle SIGINT!\n");
exit(EXIT_FAILURE);
}

//Register signal_handler as our signal handler for SIGTERM
if(signal(SIGALRM,signal_handler)==SIG_ERR)
{
fprintf(stderr,"Cannot handle SIGTERM\n");
exit(EXIT_FAILURE);
}
alarm(4);

//Reset SIGPROF behaviour to the default

if(signal(SIGABRT,SIG_DFL)==SIG_ERR)
{
fprintf(stderr,"Cannot reser SIGPROF!\n");
exit(EXIT_FAILURE);
}

//Ignore SIGHUP

//abort();
if(signal(SIGABRT,SIG_IGN)==SIG_ERR)
{
fprintf(stderr,"Cannot ignore SIGHUP!\n");
exit(EXIT_FAILURE);
}
for(;;)
pause();
return 0;
}
