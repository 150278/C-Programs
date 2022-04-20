



/*#include<stdio.h>
#include<stdlib.h>

void buggy()
{
  int *intptr;
  int i;
  intptr=(int*)malloc(sizeof(int)*5);
 printf("MALLOC cheaking : addr=%08x and size=%d\n",intptr,sizeof(int)*5);


for(i=0;i<=4;i++)
{
*intptr=200;
printf("value at ptr intptr=%d\n",(*intptr));

intptr++;

}
}


int main()
{
buggy();

return 0;
}

*/



#include<stdlib.h>
#include<semaphore.h>
#include<stdio.h>


int sharedVar=5;        //our shared variable

sem_t  my_sem       //cteate semaphore

void *thread_inc(void *arg)
{
sem_wait(&my_sem);
sharedVar++;
sem_post(&my_sem);
}


void *thread_dec(void *arg)
{
 sem_wait(&my_sem);
 sharedVar--;

sem_post(&my_sem);

}

int main()
{

pthread_t thread1,thread2;

sem_init(&my_sem,0,1);

pthread_create(&thread1,NULL,thread_inc,NULL);
pthread_create(&thread2,NULL,thread_dec,NULL);

pthread_join(thread1,NULL);
pthread_join(thread2,NULL);

printf("sharedVAr=%d\n",sharedVar);
return 0;
}















