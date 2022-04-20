









//SIGINIT Function



#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>



void signal_handler(int signal)
{
if(signal==SIGUSR2)
printf("Received a SIGUSR2 signal\n");
exit(0);
}



int main(int argc, const char * argv[])
{
printf("Registering the signal handler\n");
signal(SIGUSR2,signal_handler);
printf("Raising a SIGUSR2 signal\n");

//Raise the SIGUSR2 signal
raise(SIGUSR2);

//Display a message indicating we are leaving main
printf("Finished main\n");
return 0;
}
