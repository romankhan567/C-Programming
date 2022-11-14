#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x[3][2];
    for(a=0;a<=2;a++)
    for(b=0;b<=1;b++)
    {
    	cout<<"Enter Value:"<<endl;
    	cin>>x[a][b];
	}
	c=x[a][b];
	 for(a=0;a<=2;a++)
    for(b=0;b<=1;b++)
	if(c<x[a][b])
	c=x[a][b];
	cout<<"Maximum value"<<c;
	cout<<"Selection sort algorithms";
}
