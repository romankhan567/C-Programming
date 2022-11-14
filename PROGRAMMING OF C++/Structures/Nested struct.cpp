#include<iostream>
#include<iomanip>
using namespace std;
struct rec{
	char s_name[12],f_name[12],city[12];
	int age;
};
struct group{
	rec s1,s2;
	float x;
};
int main()
{
	group rec;
	cout<<"Enter Data for the 1st record"<<endl;
	cout<<"Enter Name:"<<endl;
	cin>>rec.s1.s_name;
	cout<<"Enter father name:"<<endl;
	cin>>rec.s1.f_name;
	cout<<"Enter name of city:"<<endl;
	cin>>rec.s1.city;
	cout<<"Enter age:"<<endl;
	cin>>rec.s1.age;
	cout<<"Enter same data type for 2nd record:"<<endl;
	cout<<"Enter Data for the 1st record"<<endl;
	cout<<"Enter Name:"<<endl;
	cin>>rec.s2.s_name;
	cout<<"Enter father name:"<<endl;
	cin>>rec.s2.f_name;
	cout<<"Enter name of city:"<<endl;
	cin>>rec.s2.city;
	cout<<"Enter age:"<<endl;
	cin>>rec.s2.age;
	cout<<"the first record is given as"<<endl;
	cout<<"Name is:   "<<rec.s1.s_name<<endl;
	cout<<"father name:   "<<rec.s1.f_name<<endl;
	cout<<"City is:   "<<rec.s1.city<<endl;
	cout<<"Age:  "<<rec.s1.age<<endl;
	cout<<"second record is:"<<endl;
		cout<<"Name is:   "<<rec.s2.s_name<<endl;
	cout<<"father name:   "<<rec.s2.f_name<<endl;
	cout<<"City is:   "<<rec.s2.city<<endl;
	cout<<"Age:  "<<rec.s2.age<<endl;
	
	
}
