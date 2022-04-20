#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
//#include<sys/stst.h>
//#include<sys/shm.h>
#include<sys/ipc.h>
#include<sys/sem.h>



int main()
{

	int p[2],ret(p);

	ret==pipe(p);
	if(ret<0)
	{
		perror("pipe");
		return;
	}


	printf("p[0]=%d p[1]=%d\n",p[0],p[1]);

	if(fork()==0)
	{
             while(1)
	     {
		     char b[20];
		     printf("before reading in new child../n");
		     read(p[0],b,20);
		     printf("\nAfter reading kin child:%s.../n",b);
	     }
	}

	else
	{
		char a[20];
		printf("Enter the data..\n");
		scanf("%s",a);
		write(p[1],a,strlen(a)+1);
	}
	

}

