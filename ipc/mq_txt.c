#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<unistd.h>

typedef struct msgbuf
{
long msgtype;
char buffer[512];
};


int main()
{

struct msgbuf v;

struct msqid_ds buf;
int id;

id=msgget(49,IPC_CREAT|0644);

printf("id=%d\n",id);

v.mtype=atoi(argv[1]);
strcpy(v.data,argv[2]);
msgsnd(id,&v,strlen(v.data)+1,0);

msgctl(id,IPC_STAT,&buf);
printf("Here are the details of the queue\n");

printf("no of msg in q %hi\n", buf.msg_qnum);

printf("max no of bytes in q %hi\n",buf.msg_qbytes);
return 0;
}
