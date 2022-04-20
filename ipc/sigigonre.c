//SIGIGNORE Function



#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>



int main()
{
signal(SIGINT,SIG_IGN); //Register signal handler for ignoring the signal

for(int i=1;;i++)
{
//Infinite loop
printf("%d : Inside main function\n",i);
sleep(1);
}
return 0;
}

//cont+\===exit a program
