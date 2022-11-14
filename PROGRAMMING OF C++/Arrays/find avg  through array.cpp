#include<iostream>
using namespace std;
int main()
{
	float a[5],sum,avg;
	int i;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in element"<<endl;
		cin>>a[i];
		
	}
	sum=avg=0;
	for(i=4;i>=0;i--)
	sum=0+a[i];
	avg=sum/5.0;
	cout<<"sum of the array="<<sum<<endl;
	cout<<"average of array="<<avg<<endl;
	
}
