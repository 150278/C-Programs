#include<stdio.h>
#include<string.h>
struct student
{
int roll;

char name[40],gender;

float  height;
}first;


int main()
{
struct student second;
struct student third={ 103,"hari prasad",'m',5.11};


//printf("\n Roll\tName\t\t\t\Gender\n");


first.roll=10;
strcpy(first.name,"shambhu");



first.gender='M';
first.height=5.6;

printf("\n %3d\t%-40s\t%c\t%1.2f",first.roll,first.name,first.gender,first.height);
printf("\n %3d\t%-40s\t%c\t%1.2f",third.roll,third.name,third.gender,third.height);

return 0;

}
