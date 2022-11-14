#include<iostream>
using namespace std;
int main()
{
	void sum(int,int);
	int a,b;
	cout<<"Enter 1st number"<<endl;
	cin>>a;
	cout<<"enter the 2nd number"<<endl;
	cin>>b;
sum(a,b);
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	cout<<"SUM"<<z<<endl;
	
}

