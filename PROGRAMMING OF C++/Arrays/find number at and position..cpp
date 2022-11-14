#include<iostream>
using namespace std;
int main()
{
	int abc[5],n,i,p;
	for(i=0;i<=4;i++)
	{
		cout<<"Enter values in elements"<<endl;
		cin>>abc[i];
		
	}
	p=0;
	cout<<"integer is"<<endl;
	cin>>n;
	for(i=0;i<=4;i++)
	{
	if(n==abc[i])
	{
	
		p=i+1;
		break;
		}	
	}
		
		cout<<"not found"<<endl;
		else cout<<"found at position="<<p<<endl;
	
}
