

//m map
/*#include<stdio.h>
#include<sys/mman.h>
#include<string.h>



int main()
{
char *c;



c=mmap(0, 50, PROT_READ|PROT_WRITE, MAP_ANONYMOUS|MAP_PRIVATE, -1, 0); //msg success
perror("mmap");



strcpy(c, "hello abhishek"); //kernel rhewlkegion in U.S
printf("%s\n",c);



// deallocate all resources //
munmap(c, 50); // malloc after free
return 0;
}

*/



/* Filename: mmap_test.c */
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>



int main ()
{
char *c;



c= mmap (0,50,PROT_READ|PROT_WRITE, MAP_ANONYMOUS| MAP_PRIVATE,-1,0);
perror("mmap");
strcpy(c,"linuxkernal");
printf("%s\n",c);



munmap(c,50);
return 0;
}
