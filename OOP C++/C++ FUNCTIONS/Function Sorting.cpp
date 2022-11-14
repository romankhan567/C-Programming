#include<iostream>
using namespace std;
int main()
{
	void find(int[],int);
	int arr[10],i,n;
	cout<<"Enter the values into arrays"<<endl;
	for(i=0;i<=9;i++)
	cin>>arr[i];
	cout<<"Find the numebr"<<endl;
	cin>>n;
	find(arr,n);
}
void find(int x[],int a)
{
	int p=0;
	for(int c=0;c<=9;c++)
	if(a==x[c])
	{
		p=c;
		break;
	}
	
	if(p==0)
	cout<<"nymber is not found"<<endl;
	else
	cout<<"number found at position"<<p+1<<endl;
}







