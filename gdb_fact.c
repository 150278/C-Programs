#include<stdio.h>
#include<stdlib.h>
int main()
{
int num;
do
{
printf("enter a number");
scanf("%d",&num);

}
while(num<0);
int fact=1;
for(int i=1;i<=num;i++)
fact =fact*i;
printf("%d!=%d\n",num,fact);

return 0;
}
// gcc -g gdb_fact.c fact
//gdb ./fact


//-g gdb_fact.c -o bug
//gdb ./bug

