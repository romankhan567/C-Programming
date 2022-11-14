#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,c,r1,r2,disc,real,img;
	cout<<"Enter The Value of A=";
	cin>>a;
	cout<<"Enter The Value of B=";
	cin>>b;
	cout<<"Enter The Value of C=";
	cin>>c;
	disc=b*b-4*a*c;
	if (disc<0)
	
    real=-b/2.0*a;
    img=sqrt (-disc)/2.0*a;
    cout<<"Roots are imaginary"<<endl;
    cout<<"Root1="<<real<<"+i("<<img<<")"<<endl;
    cout<<"Root2="<<real<<"-i("<<img<<")"<<endl;
    if(disc==0)
    r1=r2=-b/2*a;
    cout<<"Root are real and equal"<<endl;
    cout<<"Root1="<<r1<<endl;
    cout<<"Root2="<<r2<<endl;
    if(disc>0)
    cout<<"Root are real and different"<<endl;
    r1=-b/2*a+sqrt(disc)/2*a;
    r2=-b/2*a-sqrt(disc)/2*a;
    cout<<"Root1="<<r1<<endl;
    cout<<"Root2="<<r2<<endl;
    
	}














