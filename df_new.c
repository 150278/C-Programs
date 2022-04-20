#include <stdio.h>
#include<stdlib.h>


void buggy(int *p)

{
p[0]=10;
free(p);
}

int main()
{
int *ptr;
ptr=(int *)malloc(4);
buggy(ptr);
free(ptr);
}

/*$ gcc -g df_new.c -o -test -lefence
abhishek@Abhishek:~/pro_c$ ./test
free(): double free detected in tcache 2
Aborted (core dumped)
abhishek@Abhishek:~/pro_c$ 

*/

