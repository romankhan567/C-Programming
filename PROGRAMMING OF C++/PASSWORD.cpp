#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the password="<<endl;
	ps:cin>>a;
	if(a==22)
	cout<<"Accepted"<<endl;
	else
	cout<<"Try again";
	goto ps;
}
