#include<iostream> 
using namespace std;
class tx{
	public:
		tx(int a,int b)
		{
			cout<<"SUM OF 2"<<a+b;
		}
		tx(int x,int y)
		{
			cout<<"Sum of Two"<<x+y;
		}
};
int main()
{
	tx x(1,2),y(2,4);
}
	
