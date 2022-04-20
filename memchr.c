#include<stdio.h>
#include<string.h>

int main()
{
const char str[]= ",linnuxkernal.c";
const char ch ='.';
char *ret;

printf("string before set/intilization is %s\n",str);


ret =memchr(str,ch,strlen(str));

printf("string after ***%c** is *** %s\n",ch,ret-3);
return(0);
}
