#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<unistd.h>


int main()
{

int shmid;

struct shmid_ds buf[556];

shmid=shmget(48,250,IPC_CREAT|0644);
printf("%s\n"shmid);


shmctl(shmid,IPC_RMID,NULL);

}
