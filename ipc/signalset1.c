#include<stdio.h>
#include<signal.h>


void sighand(int no)
{
printf("i am in signalhandler\n");


}



main()
{
sigset_t s_set;

signal(2,sighand);

sigemptyset(&s_set);
sigaddset(&s_set,2);
perror("sig2");

sigaddset(&s_set,4);
perror("sig4");
sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);
perror("sigmask");
printf("send me signal one see the effect now\n");
getchar();
getchar();
sigprocmask(SIG_UNBLOCK,&s_set,NULL);
printf("now signal are unblock\n");

while(1);

}
