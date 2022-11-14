#include<iostream>
using namespace std;
int main()
{
	int i,u,m,p,t,size,arr[4];
	for(size=0;size<=4;size++)
	{
		cout<<"entering values"<<endl;
		cin>>size;
	}
	for(u=0;u<=size;u++)
	
	{
		m=arr[u];
		for(i=u;i<=3;i++)
		if(m>arr[i])
		
	
	{
			m=arr[i];
		p=i;
	}
		
		
	
	t=arr[p];
	arr[p]=arr[u];
	arr[u]=t;
}
cout<<"sorted value"<<endl;
for(i=0;i<=3;i++)
cout<<arr[i]<<endl;
}
	

