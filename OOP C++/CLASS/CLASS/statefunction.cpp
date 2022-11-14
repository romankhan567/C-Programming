#include<iostream> 
using namespace std;
class tx{
	public:
		tx(int a,int b)
		{
			cout<<"SUM OF 2"<<a+b<<endl;
		}
		tx(int x,int y)
		{
			cout<<"Sum of Two"<<x+y<<endl;
		}
};
int main()
{
	tx a,b(1,2),x,y(2,4);
}
	
