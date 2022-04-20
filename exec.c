/*#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main(void) 
{ 
int pid_1,pid2;

printf("curtrent process pid=%d\n",getpid());

pid_1=fork();

if(pid_1==0)
{
printf("current proccess =%d\n",getpid());
printf("current proccess =%d\n",getpid());
execl("/home/abhishek/pro_c","./a",0);


}
else
{
sleep(5);
printf("current proccess =%d\n",getpid());
printf("current proccess =%d\n",getpid());

}
while(1);
return 0;
}
*/


/*

#include <stdio.h> 
int main(int argc,char *argv[]) 
{ 
int i;

printf("\n file name %s\n\n",argv[0]);
printf("\n total number of argument %d",argc);

printf("\n argument  passesd");


for(i=1;i<argc;i++)
  printf("%s ",argv[i]);

printf("\n");

}
*/





/*
// _exit(0) function is not calling in function which are register by function
#include<stdio.h>



void callback1()
{
printf("Calling callback1\n");
}



void callback2()
{
printf("Calling callback2\n");
}



void callback3()
{
printf("Calling callback3\n");
}



int main()
{
printf("Registering callback1\n");
atexit(callback1);
printf("Registering callback2\n");
atexit(callback2);
printf("Registering callback3\n");
atexit(callback3);


//_exit(0);

return 0;
}


*/




// wait(); function

/*



#include <stdio.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
int main(void) 
{
 pid_t pid1;

pid1=fork();
if(pid1==0)
{
sleep(5);
printf(" i am child with delay of 5 second and my child pro pid=%d\n",getpid());
}
else
{
int pid2;
printf(" i am parent pro pid=%d\n",getpid());
pid2=wait(0);


printf("paraent=%d\n",pid2);
printf("i am child with delay of 5 second and my child pro pid=%d\n",getpid());
}
return 0;
}




*/



/*

// chilld_exex.c

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

*/


/*

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include<pthread.h>
pthread_t tid;


void *thread1(void *arg)
{
printf("newly created thread is excuteing \n");
return NULL;
}


int main(void)

{
int ret=pthread_create(&tid,NULL,thread1,NULL);
if(ret)
{
printf("thread isd no cfreetre\n");
}
else
{
printf("thread is create\n");
}
//sleep(2);//imp to excute fun1  --not are


pthread_join(tid,NULL);// jois given thrid with main process excution


                                //1 join given thdid with main process excution

                        // 2  forces process to wait for completion of thd..thdid

return 0;
}


// process === thread == not waiting for thd excuting and completion
// process  crtd thd == process terminals even thread also terminals
//since thread are some addr space



*/





/*
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



#include<pthread.h>



pthread_t tid, tid2;



void* thread1(void *arg)
{
//sleep(2);
printf("Newly created thread is executing\n");
for(int i=0; i<1000; i++)
printf("thread1: %d\n",i);



return NULL;
}



void* thread2(void *arg)
{
//sleep(2);
printf("Newly created thread2 is executing\n");
for(int i=0; i<1000; i++)
printf("thread2: %d\n",i);

return NULL;
}



int main(void)
{
int ret=pthread_create(&tid, NULL, thread1, NULL);
int ret1=pthread_create(&tid2, NULL, thread2, NULL);



if(ret && ret1)
printf("thread not created\n");
else
printf("Thread is created\n");



// sleep(3);



pthread_join(tid, NULL);
pthread_join(tid2, NULL);



printf("Exiting main thread\n");

return 0;
}

*/



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("PID of example.c = %d\n", getpid());
    char *args[] = {"Hello", "C", "Programming", NULL};
    execv("./hello", args);
    printf("Back to example.c");
    return 0;
}
































