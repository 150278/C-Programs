#include<stdio.h>
#include<string.h>

int main()
{
const char str[]= ",linnuxkernal.c";
const char ch ='#';

printf("string before set/intilization is %s\n",str);


memset(str,ch,strlen(str));

printf("string after set/intilization is %s\n",str);
return(0);
}
