#include<stdio.h>
#include<string.h>

int main()
{
const char str1[15]= ",linnuxkernal.c";
const char str2[15];

 mymemcopy(str1,str2,15);
printf("string in size %s\n",str2);
return 0;
}


void mymemcopy(char *src,char *dest,int count)
{
int i;
for(i=0;i<count;i++)
{
*dest=*src;
dest++;
src++;
}

}
