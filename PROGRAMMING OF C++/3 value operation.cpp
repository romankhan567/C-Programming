#include<iostream>
using namespace std;
main()
{
	int x,y,z,s,p;
	char name[60];
	cout<<"enter the name of student"<<endl;
	cin>>name;
	cout<<"marks physics"<<endl;
	cin>>x;
	cout<<"marks english"<<endl;
	cin>>y;
	cout<<"marks system"<<endl;
	cin>>z;
	s=x+y+z;
	p=x+y+z/3;
	cout<<"add of numbers"<<s<<endl;
	cout<<"avg of numbers"<<p<<endl;
	}
	
