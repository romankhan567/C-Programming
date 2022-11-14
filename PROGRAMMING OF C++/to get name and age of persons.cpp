#include<iostream>
#include<iomanip>
using namespace std;
int main()
{	int age;
	long int age_mon_days;
	char name[100];
	cout<<"enter name of the person="<<endl;
	cin>>name;
	cout<<"enter age of the person in year="<<endl;
	cin>>age;
	age_mon_days=age*12*30;
	cout<<"Age in days is="<<age_mon_days;
}
	
