/*#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<stdlib.h>
#include<unistd.h>


int get_semaphore(void);

int relesed_semaphore(void);
int sem_id;

union semun{
int  val;
struct semid_ds *buf;
unsigned short *array;
struct seminfo *__buf;
};


struct sembuf sem_op;

union semun sem_union;

int main()
{
int i,j;
sem_id=semget(key_t)1234,1,0666|IPC_CRAET);


for(i=0;i<=10;i++)
{
get_semaphore();

printf("/n SEM2:%d:got the semaphore\n",getpid());
for(j=0;j<=3;j++)
{
sleep(1);
printf("\a");
}

printf("\n sem2 %d relesed the semaphore\n",getpid());
release_semaphore();
sleep(2);
}

if(semctl(sem_id,0,IPC_RMID,sem_union)<0)
printf("unable delete semaphore\n");
else
printf("semaphore deleted\n");
}



int get_semaphore(void)
{
sem_op.sem_num=0;

sem_op.sem_op=-1;
sem_op.sem_flg=SEM_UNDO;


if(semop(sid, &sem_op, 1) < 0)
{
printf("Failed\n");
return -1;
}
}



int get_release()
{
sem_op.sem_num = 0;
sem_op.sem_op = 1;
sem_op.sem_flg = SEM_UNDO;



if(semop(sem_id, &sem_op, 1) < 0)
{
printf("Failed to get the semaphore\n");
return -1; //exit(-1);
}

return 0;

}

int release_semaphore(void)
{
sem_op.sem_num=0;

sem_op.sem_op=1;

sem_op.sem_flg=SEM_UNDO;


*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/sem.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<string.h>
#include<unistd.h>



union semun
{
int val;
struct semid_ds *buf;
unsigned short *array;
struct seminfo *_buf;
};



int get_release(void);
int get_semaforce(void);
struct sembuf sem_op;
union semun sem_union;
int sid;



int main()
{
int i;
sleep(3);



sid = semget((key_t)10, 1, 0666|IPC_CREAT);
printf("Semaforce id: %d\n",sid);
/*
sem_union.val = 2;



if(semctl(sid, 0, SETVAL, sem_union) < 0)
printf("error semctl");
*/
for(i=0; i<=5; i++)
{
get_semaforce();



printf("\n%d: got the semaforce\n",getpid());
sleep(1);
printf("\n%d: released the semaforce\n",getpid());
get_release();



sleep(1);
}



if(semctl(sid, 0, IPC_RMID, sem_union) < 0)
printf("Fails to delete the semaforce\n");
else
printf("Semaforce deleted\n");



return 0;
}



int get_semaforce()
{
sem_op.sem_num = 0;
sem_op.sem_op = -1;
sem_op.sem_flg = SEM_UNDO;



if(semop(sid, &sem_op, 1) < 0)
{
printf("Failed\n");
return -1;
}
}



int get_release()
{
sem_op.sem_num = 0;
sem_op.sem_op = 1;
sem_op.sem_flg = SEM_UNDO;



if(semop(sid, &sem_op, 1) < 0)
{
printf("Failed\n");
return -1; //exit(-1);
}
}










