#include<stdio.h>
#include<unistd.h>


int main(void)
{
printf("cirrent process pid\n");

printf("%d\n",getpid());
while(1);
return 0;
}
