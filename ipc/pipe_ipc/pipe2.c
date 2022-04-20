#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
int p[2];

pipe(p);

printf("Read end of pipe = %d\twrite end of pipe =%d\n",p[0],p[1]);

if(fork())
{
char s[50];
printf("in parent enter Data...\n");

write(p[1],s,strlen(s)+1);

}

else
{
char buf[20];

printf("in child...\n");

read(p[0],buf,sizeof(buf));

printf("child pro printing   bata   of process %s\n",buf);
}
return 0;

}
