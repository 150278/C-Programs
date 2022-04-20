#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<unistd.h>



#define KEY 8979


main()
{
int qid;
struct msqid_ds buf;


qid=msgget(32,IPC_CREAT|0644);

msgctl(qid,IPC_STAT,&buf);


printf("Here are the details of the queue\n");

printf("no of msg's  in q  %hi\n",buf.msg_qnum);

printf("max no of butes in q %hi\n",buf.msg_qbytes);
}
