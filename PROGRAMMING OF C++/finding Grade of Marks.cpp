#include<iostream>
#include<iomanip>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int s1,s2,s3,avg;
	char grade;
	cout<<"Enter Subject 1="<<endl;
	cout<<"Enter Subject 2="<<endl;
	cout<<"Enter Subject 3="<<endl;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	avg=(s1+s2+s3)/3;
	cout<<"Average is="<<avg<<endl;
	if(avg>25)
	if(avg>33)
	if(avg>50)
	if(avg>80)
	grade='a';
	else grade='b';
	else grade='c';
	else grade='f';
	else grade='E';
	cout<<"Grade="<<grade;
	
}
