#include<stdio.h>
#include<string.h>

int main()
{
size_t i;

const int alloc_size=64*1024*1024;

char* memory=malloc (alloc_size);
mlock(memory,alloc_size);


for(i=0;i<alloc_size;i++)
memory[i]='0';


printf("allocation memory inlitized with =%s\n",memory);

munlock(memory,alloc_size);

}
