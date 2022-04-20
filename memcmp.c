#include<stdio.h>
#include<string.h>

int main()
{
const buf1[10];
const buf2[10];
int *ret;


 memcpy(buf1,"madammm",6);
 memcpy(buf2,"mad",5);
 ret=memcmp(buf1,buf2,5);

if(ret>0)
{
printf("buf1 is greater than buf2\n");
}
else if(ret<0)
{
printf("buf1 is less than buf2\n");
}

else
{

printf("buf1 is equal to buf2");
}
return(0);
}
