#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{

char s[20];
int fd;

printf("before open()..\n");

fd=open("newfifo11",O_RDONLY);
printf("After  open()...\n");

read(fd,s,sizeof(s));

printf("Data %s\n",s);

return 0;
}
