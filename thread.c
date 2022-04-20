
/*

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>


int s=5;
void *threadinc(void *arg)

{
s++;
printf("after inc=%d\n",s);
}


void *threaddec(void *arg)
{
s--;

printf("after dec=%d\n",s);
}
int main()
{
pthread_t thread1,thread2;

pthread_create(&thread1 ,NULL , threadinc,NULL);
pthread_create(&thread2 ,NULL , threaddec,NULL);


pthread_join(thread1,NULL);
pthread_join(thread2,NULL);

printf("sharevar=%d\n",s);
return 0;
}


*/




/*
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>


//int s=5;
void *printfhello(void *threadid)

{

printf("\n hello farhan\n");

while(1);
}



int main()
{
pthread_t thread;
int rc ,t=0;
printf("create thread\n");
rc =pthread_create(&thread,NULL,printfhello,NULL);

printf("\n thread id %u",thread);
sleep(6);
t=pthread_cancel(thread);
if(t==0)
printf("\n cancle thread");
printf("\n thread :=%u\n",thread);
}


*/








/*

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



#include<pthread.h>



pthread_t tid;



struct char_print_params
{
char c;
int count;
};



void* thread_arg(void *arg)
{
struct char_print_params *s = (struct char_print_params *) arg;



printf("Newly created thread is executing\n");
printf("Character is: %c and count is: %d\n",s->c, s->count);



return NULL;
}



int main(void)
{
struct char_print_params t1_arg;
struct char_print_params t2_arg;



t1_arg.c = 'm';
t1_arg.count = 100;
int ret=pthread_create(&tid, NULL, thread_arg, &t1_arg);



t2_arg.c = 'v';
t2_arg.count = 200;
int ret1=pthread_create(&tid, NULL, thread_arg, &t2_arg);



pthread_join(tid, NULL);



printf("Exiting main thread\n");

return 0;
}


*/




/*

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



#include<pthread.h>



pthread_t tid;



struct char_print_params
{
char c;
int count;
};



void* thread_arg(void *arg)
{
struct char_print_params *s = (struct char_print_params *) arg;



printf("Newly created thread is executing\n");
printf("Character is: %c and count is: %d\n",s->c, s->count);



return NULL;
}



int main(void)
{
struct char_print_params t1_arg;
struct char_print_params t2_arg;



t1_arg.c = 'm';
t1_arg.count = 100;
int ret=pthread_create(&tid, NULL, thread_arg, &t1_arg);



t2_arg.c = 'v';
t2_arg.count = 200;
int ret1=pthread_create(&tid, NULL, thread_arg, &t2_arg);



pthread_join(tid, NULL);



printf("Exiting main thread\n");

return 0;
}

*/



/*


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<fcntl.h>



void *th_fn(void * p);

int fd;

int main()

{
pthread_t t1,t2;


fd=open("/etc/passwd",O_RDONLY);
printf("file opened with fd: %d \n",fd);



pthread_create(&t1,NULL,th_fn,"thread one");
pthread_create(&t2,NULL,th_fn,"thread one");






pthread_join(t1,NULL);
pthread_join(t2,NULL);

return 0;

}

void *th_fn(void *p)
{
char * str, buff[100];

int n,pid;
 str= (char *)p;

pid=getpid();

printf("%s: /t started now: \t for process %d\n\n",str,pid);

do{
n=read(fd,buff,100);
printf("%s\t Read: \t %d \n\n",str,pid);
printf("\n..................\n");

write(1,buff,n);


printf("\n.........\n");
sleep(3);
}
while(n);

printf("%s: \t finished:\t for process %d \n\n",str,pid);

}


*/



/*
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<fcntl.h>
#include<sys/mmsn.h>
void* proc(void * param)
{
sleep(2);
return 0;

}
int main()
{

pthread_attr_t Atttr;

pthread_t  id;
void *stk;
size_t  siz;
int  err;

size_t my_stksize=300000;
void * 

*/


#include <pthread.h>
#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>



void * Proc(void * param)

{

sleep(2);



return 0;



int main()



{



pthread_attr_t Attr;//1



pthread_t  id;







void   *Stk;



size_t  tnt



size_t int err;


size_t my stksize=300000;//0x100 100



void my stack;



pthread_attr_init(&Attr); //2.pthread_attr_init(pthread_attr_t *ptr)



pthread_attr_getstacksize(&Attr, &siz); // default stack size 8mb..pthd lib pthread_attr_getstackaddr (&Attr, &stk);// def stack stack addr before thd crtn 0000



pthread_attr_getstack(&Attr, &stk, &siz);



printf("Default: Addr=x default Size=%d\n", Stk, Siz); // p


my_stack=(void*)malloc(my_stksize);

pthread_attr_setstack(&Attr,my_stack,my_stksize);


pthread_create(&Id,&Attr,Proc,NULL);


pthread_att_getstack(&Attr,&Stk,&Siz);


printf("newly define stack:Addr=%08x and size =%d\n",Stk,Siz);

sleep(3);

return (0);
}
}










































