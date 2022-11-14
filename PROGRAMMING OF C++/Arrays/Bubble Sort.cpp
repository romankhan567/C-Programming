#include<iostream>
using namespace std;
int main()
{
	int i,u,t,arr[7],size;
	for(size=0;size<=7;size++)
	{
	cout<<"enter value of the arrays="<<endl;
	cin>>size;
}
	
	for(u=6;u>=1;u--)
	for(i=0;i<u;i++)
	if(arr[i]<arr[i+1])
	{
		t=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=t;
		
	}
	cout<<"Sorted Values"<<endl;

	for(i=0;i<=6;i++)
	cout<<arr[i]<<endl;

}
