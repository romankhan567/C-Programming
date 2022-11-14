#include<iostream>
using namespace std;
int main()
{
	void tab(int);
	int n;
	cout<<"enter"<<endl;
	cin>>n;
    tab(n);
}
void tab(int n)
{
	for(int c=1;c<=10;c++)
	cout<<n<<"X"<<c<<"="<<n*c<<endl;
}
	
	
	
	

