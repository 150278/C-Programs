//shows an example of when sigabort will be generated cersion:1.0;


#include<stdio.h>
//#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
//#include<stdlib.h>

void abort_handler(int);


void main()
{
if(signal(SIGABRT,abort_handler)==SIG_ERR)
{
fprintf(stderr,"Couldn't set signal handler\n");
exit(1);

}
//signal(SIGINT,SIG_DFL);


abort();
exit(0);
}


void abort_handler(int i)
{
fprintf(stderr,"Caught SIGABRT,exitting application\n");
exit(1);
}



