#include<iostream>
using namespace std;
int main()
{
	int a;
	char operation;
	cout<<"enter integer"<<endl;
	cin>>a;
	cout<<"enter an op"<<endl;
    cin>>operation;
	if((a<0) || (operation=='y') || (operation=='n'))
	cout<<"condition is true"<<endl;
	else
	cout<<"all Relational expression are False"<<endl;
	
}
