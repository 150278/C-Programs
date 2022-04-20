#include <stdio.h>
#include<stdlib.h>


void buggy()
{
int *intptr;
intptr=(int *)malloc(sizeof(int));

*intptr=10000;

printf("value at ptf intptr=%d\n",(*intptr));

free(intptr);

*intptr=99;
}




int main()
{
buggy();

return 0;
}

// gcc -g checkfree.c -o test
//abhishek@Abhishek:~/pro_c$ valgrind ./test

