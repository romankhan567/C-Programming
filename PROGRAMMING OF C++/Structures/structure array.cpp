#include<iostream>
using namespace std;
struct result{
	char name[50];
	float marks;
	char school;
};
int main()
{
	
	result abc[5];
	int i;
	for(i=0;i<=4;i++)
	{ 
	cout<<"Enter name of a Student:"<<endl;
	cin>>abc[i].name;
	cout<<"enter  Marks:"<<endl;
	cin>>abc[i].marks;
	cout<<"Enter school:"<<endl;
	cin>>abc[i].school;
}
	
	cout<<"output"<<endl;
		for(i=0;i<=5;i++)
{
	cout<<"rec#"<<i+1<<""<<abc[i].name;
	cout<<abc[i].marks<<"";
	cout<<abc[i].school<<""<<endl;
}
}
