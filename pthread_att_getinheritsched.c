#include<pthread.h>
#include<stdio.h>



void * proc(void* param)
{
sleep(3);
return 0;
}

int main(int argc,char *argv[])
{
pthread_attr_t Attr;

pthread_t Id;

int  err,info;

pthread_attr_init(&Attr);
pthread_attr_getinheritsched(&Attr,&info);

switch(info)
{

case PTHREAD_INHERIT_SCHED:
printf("\n sched from its thd\n");
break;

case PTHREAD_EXPLICIT_SCHED:
printf("\n eXPLICIT DEFINE OWN SCHD POL N PRO\n");

break;
}
pthread_create(&Id,&Attr,proc,NULL);
return 0;
}

