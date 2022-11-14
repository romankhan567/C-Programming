#include<iostream>
using namespace std;
int main()
{
	void comp(int,int);
	int a,b;
	cout<<"Enters the numbers"<<endl;
	cin>>a>>b;
	comp(a,b);
}
void comp(int x,int y)
{
	(x>y)?cout<<"1st is grater"<<endl;
	:cout<<"2nd is grater"<<endl;
}
