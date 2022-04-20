#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char buff_comm[5];
int x;

strcpy( buff_comm,"ls -l");

printf("system() library function uses fork() to create a child process\n");

printf("child process excutes execl() which loads and run new program provided by aynsns() \n");

 //x=
system(buff_comm);

printf("x=",x);
return(0);
}
