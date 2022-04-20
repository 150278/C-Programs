// LINUX INTERNAL //
// Q.1 //
// ABHISHEK SAHU //


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	
	char Rbuff[1000];
	
	int fd1 = open("input.txt", O_RDONLY, 777);       //open input file 	
	int fd2 = open("output.txt",O_CREAT | O_RDWR , 777);	  //open output file
	int len;
	
	//reading from input.txt
	read(fd1, Rbuff, 200);
	
	printf("data read = %s\n",Rbuff);
	
	//writing to output.txt
	len = write(fd2, Rbuff, 200);
	
	printf("data written = %d \n", len);
	
	
	
	close(fd2);
	close(fd1);

return 0;	
}









/*

// LINUX INTERNAL //
// Q.2 //
// MAHADEV G I //


#include<stdio.h>
#include<fcntl.h>



int main()
{
int fd1, fd2, fd3;
int len=0;



char write_buff[] = "Writing data to write1.txt file to both read and write operation\n";



fd1 = open("write1.txt", O_CREAT | O_RDWR, 0666);
len=write(fd1 , write_buff, sizeof(write_buff));
printf("File descriptor returned by fd1 is: %d and data written length is: %d\n",fd1,len);



lseek(fd1, 0, SEEK_SET);



char read_buff[len];



read(fd1, read_buff, len);
// printf("File descriptor returned by fd1 is: %d\n",fd1);
printf("File contents are: %s",read_buff);
close(fd1);



int length=0;
char buffer[]="Here I am using the concept of lseek and it's flags: SEEK_SET, SEEK_CUR, SEEK_END";
int curr=0;



curr = lseek(fd1, 0, SEEK_CUR);
printf("Current position of file is: %d\n",curr);



fd2 = open("write1.txt", O_RDWR, 0666);
lseek(fd2, 0, SEEK_END);



length = write(fd2 , buffer, sizeof(buffer));
printf("File descriptor returned by fd2 is: %d and data written length is: %d\n",fd1,length);



lseek(fd2, len, SEEK_SET);
char buffer1[length];



read(fd2, buffer1, length);

printf("File contents are: %s",buffer1);



close(fd2);



return 0;
}


*/

// LINUX INTERNAL //
// Q.3 //
// MAHADEV G I //
/*

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
		
	char file[20];
	
	
	printf("Enter file name.extension : ");        // taking file name as input
	scanf("%s", file); 
	
	printf("Executing ls -l\n");
	
        
	execl("/bin/ls", "ls", "-l", file, 0);        // performing 'ls -l' operation on user file
	                                         
	return 0;
}



*/

































// LINUX INTERNAL //
// Q.4 //
// MAHADEV G I //


/*

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd1, fd2;
	char rbuff[100];
	int len;
	
	fd1 = creat("new.txt", 0777);		//file created
		
	fd2 = open("data.txt", O_RDONLY, 777);		//opening a existing file	--data.txt
	
	len = read(fd2, rbuff, 60);			//reading from data.txt & saving it to rbuff[]	
	printf("Data in data.txt -\n%s\n",rbuff);	//printing the read data from file data.txt
	
	len = write(fd1, rbuff, 60);			//writing to 'new.txt'
	
	printf("Data written to new.txt\n");
	
	lseek(fd2, 5, SEEK_SET);			//lseek fd2 by 5
	read(fd2, rbuff, 50);
	printf("After lseek -- data read = %s\n",rbuff);
	
	close(fd2);
	close(fd1);
}

*/


// LINUX INTERNAL //
// Q.4 //
// MAHADEV G I //


/*
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd1, fd2;
	char rbuff[100];
	int len;
	
	fd1 = creat("new.txt", 0777);		//file created
		
	fd2 = open("data.txt", O_RDONLY, 777);		//opening a existing file	--data.txt
	
	len = read(fd2, rbuff, 60);			//reading from data.txt & saving it to rbuff[]	
	printf("Data in data.txt -\n%s\n",rbuff);	//printing the read data from file data.txt
	
	len = write(fd1, rbuff, 60);			//writing to 'new.txt'
	
	printf("Data written to new.txt\n");
	
	lseek(fd2, 5, SEEK_SET);			//lseek fd2 by 5
	read(fd2, rbuff, 50);
	printf("After lseek -- data read = %s\n",rbuff);
	
	close(fd2);
	close(fd1);
}


*/

// LINUX INTERNAL //
// Q.5 //
// MAHADEV G I //




/*
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

char buff[]="\0";
int main()
{
     int fd;
     if((fd = creat("file1.txt", 777)) < 0)
     {
            perror("Creation error");
	    exit(1);
     }
     
   // if(write(fd,buf2,sizeof(buf2)) < 0)
   // {
   //	    perror("Writing error");
   //       exit(2);
   // }
     
     if(lseek(fd,4094,SEEK_SET) < 0)
     {
	    perror("Positioning error");
            exit(2);
     }
     if(write(fd,buff,sizeof(buff)) < 0)
     {
	    perror("Writing error");
            exit(3);
     }
return 0;

}
    
*/


/*
#include<stdio.h>

#include<fcntl.h>



int main()
{
int fd1, fd2;
int len;



char write_buff[] = "This is for copying data from one file to other file for completing task of assignment 1";



fd1 = open("file.txt", O_CREAT | O_RDWR, 0666);
len = write(fd1, write_buff, sizeof(write_buff));
printf("length of data in file.txt: %d & fd1: %d\n",len,fd1);
// close(fd1);




lseek(fd1, 0, SEEK_SET);



char read_buff[len];
read(fd1, read_buff, len);
printf("Content of file.txt is: %s\n",read_buff);
close(fd1);



fd2 = open("file1.txt", O_CREAT | O_RDWR, 0666);
write(fd1, read_buff, sizeof(read_buff));
printf("length of data in file.txt: %d & fd2: %d\n",len,fd2);
close(fd2);




return 0;
}		   

*/

































