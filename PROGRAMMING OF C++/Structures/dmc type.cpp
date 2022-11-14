#include<iostream>
#include<conio.h>
using namespace std;
struct st01{

	char name[15];
	int s1,s2,s3,s4,rec,st01;
		};	
int main()
{
rec st01={"roman",92,89,98};
int total;
total=st01.s2+st01.s3+st01.s4;
cout<<"name of student:"<<st01.name<<endl;
cout<<"marks in 1st:"<<st01.s2<<endl;
cout<<"marks in 2nd:"<<st01.s3<<endl;
cout<<"marks in 3rd:"<<st01.s4<<endl;
cout<<"total is:"<<total<<endl;
}

