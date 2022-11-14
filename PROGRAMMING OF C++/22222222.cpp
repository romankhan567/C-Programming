#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter your first number">>endl;
	cin>>a;
 int choice;
 cout<<"1:program to input data="<<endl;
 cout<<"2:program to print data="<<endl;
 cout<<"3:programe to genrate report="<<endl;
 cout<<"4:exit="<<endl;
 cout<<"Enter your choice [1-4]"<<endl;
 
 cin>>choice;
 switch(choice)
 {
 	case 1:cout<<"you have selected the 1st choice"<<endl;
 	break;
 	case 2:cout<<"you have selected the 2rd option"<<endl;
 	break;
 	case 3:cout<<"you have selected the 3th option"<<endl;
 	break;
 	case 4:cout<<"you have selected the 4th option"<<endl;
 	break;
 	cout<<"\n ok";
 }
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
    return 0;
    getch();
    
}	
	
	
	

