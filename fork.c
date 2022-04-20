

/*#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    
//printf("current porocess \n");

  //  fork(); 
    fork();
    /* the child and parent will execute every line of code after the fork (each separately)*/
   // printf("Hello world!\n"); 

//printf("linux process\n");
//printf("linux process\n");


////while(1);
   // return 0; 
//} 








//*********************************************************


/*
#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main(void) 
{ 
int pid_1,pid2;

printf("curtrent process pid=%d\n",getpid());

pid_1=fork();

if(pid_1==0)
{
printf("current proccess =%d\n",getpid());
printf("current proccess =%d\n",getpid());
pid2=fork();
printf("current proccess =%d\n",getpid());
printf("current proccess =%d\n",getpid());
}
else
{
sleep(3);
printf("new child proccess =%d\n",getpid());
printf("new child proccess =%d\n",getpid());

}
while(1);
return 0;
}




*/


/*

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 


printf("i am going to excute an 'ls' program\n");

execl("/bin/ls","ls","-lh",0);



printf("i an excute is program");
printf("i an excute is program");
printf("i an excute is program");
}   


*/

#include <stdio.h> 
//#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 

int ret;
ret=execl("/user/bin/vim","info1.txt",0);
if(ret==-1)
printf("file %d\n",ret);

}































