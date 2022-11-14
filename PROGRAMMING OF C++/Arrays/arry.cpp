#include<iostream>
using namespace std;
int main()
{
	int abc[5],i;
	for(i=1;i<=5;i++)

	{
			cout<<"enter value in element";
		cin>>abc[i];
	}
	
	for(i=4;i>=0;i--)
	cout<<"Value in a"<<abc[i]<<endl;
}
