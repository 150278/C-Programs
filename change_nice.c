#include<errno.h>
#include<stdio.h>
#include<unistd.h>



int main()
{
int ret,i,cnt=0;
 errno=0;


ret=nice(1);

if(ret==-1&&errno !=0)
perror("nice");
else
printf("nice value is noee %d\n",ret);


while(1)
{
printf("process with nice %d count=%d\n",ret,cnt);
for(i=0;i<100000000;i++)
cnt++;
}

return 0;
}
