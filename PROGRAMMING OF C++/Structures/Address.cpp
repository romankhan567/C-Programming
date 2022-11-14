#include<iostream>
#include<conio.h>
using namespace std;
struct address
{
	char city[15];
	int pcode;
};
int main()
{
	address taq;
	cout<<"enter city?"<<endl;
	cin>>taq.city;
	cout<<"enter postal code"<<endl;
	cin>>taq.pcode;
	cout<<"output from structures"<<endl;
	cout<<"city:"<<taq.city<<endl;
	cout<<"pcode:"<<taq.pcode<<endl;
	
}

