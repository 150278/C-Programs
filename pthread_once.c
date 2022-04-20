#include<pthread.h>
#include<stdio.h>
pthread_once_t once= PTHREAD_ONCE_INIT;

void *myinit()

{
printf("\n i am in int
t fun\n");
}


void *mythread(void *i)
{
printf("\n i am in mythread : %d\n",(int *)i);
pthread_once(&once,(void *)myinit);
printf("\n exit from thread :%d\n",(int *)i);
}


int main()
{

pthread_t thread,thread1,thread2;
pthread_create(&thread,NULL,mythread,(void *)1);
pthread_create(&thread1,NULL,mythread,(void *)2);
pthread_create(&thread1,NULL,mythread,(void *)3);

printf("\n Exit for main thread\n");

pthread_exit(NULL);
}

