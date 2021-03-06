#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<string.h>



#define MY_KEY 199
#define SHM_SIZE 0x1000


#define MSG_LEN 256
#define RESP_MSG_START 256


int main()
{ 
int semId ,shmId;
char *pShm;

struct sembuf smop;
semId =semget(MY_KEY,1,0660);

if(semId<0)
{
printf("could not create semaphore\n");
return -1;
}
else
printf("Opened a semaphore .id is %d\n",semId);



shmId=shmget(MY_KEY,SHM_SIZE,0660);
if(shmId<0)
{
printf("could not create shared memory segment\n");
return 0;
}


pShm=shmat(shmId,NULL,0);
if(!pShm)
{
printf("could not attach shared memoryt segment\n");
return (3);
}


while(1)
{


printf("Client : Enter some request some messageto send to server\n");
fgets(pShm,MSG_LEN,stdin);

smop.sem_num=0;
smop.sem_op=1;
smop.sem_flg=0;

semop(semId,&smop,1);
smop.sem_num=0;
smop.sem_op=-1;
smop.sem_flg=0;

semop(semId,&smop,1);
puts(pShm+RESP_MSG_START);


}
}
