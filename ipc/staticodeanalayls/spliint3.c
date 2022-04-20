#include<stdio.h>


const char *int_string(int value)

{
const char *ret;


switch(value)
{
case 1:
ret="one";
break;

case 2:
ret="two";

case 3:

ret="three";

break;

default:
ret="less than 1 or more than 3";

break;
}
return ret;

}

int main()
{
printf("into_string(2)=%s",(char*)int_string(2));
return 0;


}
