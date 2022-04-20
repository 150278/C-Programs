/* show how to perform some task periodically
version : 1.0
*/


#include<signal.h>


void sighand(int signum)
{
printf("i have to wake up my boss now!!!!!!!\n");

}

main()
{
signal(SIGALRM,sighand);
alarm(5);

while(1)
{
}

}
