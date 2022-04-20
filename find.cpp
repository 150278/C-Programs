#include<fstream>
//#include<fstream>
#include<iostream>
using namespace std;
#include<string>
int main()
{
fstream fin;

fin.open("demo.text");
int count=0;
string word;
char a[4]= "the";

if(!fin)
cout<<"the file cannat open"<<endl;

else
while(fin>>word)
{

if(word == a)
count++;
}
cout<<"total words:"<<count;
fin.close();

return 0;
}

