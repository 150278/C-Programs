#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>


int main(void)
{

printf("server - listening");

int code =mkfifo("client_server_fifo",0644);


if(code == -1)
{
perror("mkfifo returned an error _file may already exist");

}



int fd = open("client_server_fifo",O_RDONLY);
if(fd == -1)
{
perror("cannot open fifo for read");
return 0;
}


printf("FIFO OPEN");


char serverrcv[100];

memset(serverrcv,0,100);


int res;
char len;



read(fd,serverrcv,100);

printf("server recevid: %s\n",serverrcv);


printf("EOF Reached");

close(fd);
printf("FIFO Closed");
return 0;
}
