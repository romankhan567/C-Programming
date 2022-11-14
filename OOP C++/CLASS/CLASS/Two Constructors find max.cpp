#include<iostream>
using namespace std;
class find{
	
	
	private:
		int mx;
 public:
 find(int x,int y,int z)
 {
 	if(x>y)
 	if(y>z)
 	mx=x;
 	else
 	mx=z;
 	else if(y>z)
 	mx=y;
 	else
 	mx=z;
 	cout<<"max value is"<<mx;
 }
 find(int x,int y)
 {
 	if(x>y)
 	mx=x;
 	else
 	mx=y;
 	cout<<"maximum between two numbers"<<mx;
 }
};
int main()
{
	int x,y,z;
    x=9;
	y=57;
	z=67;
	find ddd(x,y),gg(x,y,z);
}
