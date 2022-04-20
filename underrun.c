#include<stdio.h>
#include<stdlib.h>
extern int EF_PEOTECT_BLOW;




void buggy()
{
int *intptr;
int i;
intptr= (int *)malloc(sizeof(int)*5);


//printf("MALLOC chraking :add= 488x and size=%d\n",intptr,sizeof(int )*5);

for(i=0;i<3;i++)
{
*intptr=100;
printf("value at ptr intptr= %d\n",(*intptr));

intptr--;
}
}
int main()
{
buggy();

return 0;
}
