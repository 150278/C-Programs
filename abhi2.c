#include<stdio.h>
#include<fcntl.h>
int main(void)
{

printf("my process pid=%d\n",getpid());
printf("my parent pid =%d\n",getppid());

printf("linux kernal\n");

while(1);
return 0;

}
