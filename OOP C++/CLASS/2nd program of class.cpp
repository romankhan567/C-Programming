#include<iostream>
using namespace std;
class sum{
	private:
		int n,m,avg;
		public:
			void get (void)
			{
	cout<<"Enter 1st value"<<endl;
cin>>n;
cout<<"Enter 2nd value"<<endl;
cin>>m;
			}
			avg=n+m/2;
			void display (void)
			{
				cout<<"sum is:"<<n+m;
				cout<<"avg is"<<avg;
		}
};
main()
{
sum s;
int x,y;
s.get();
s.display();
s.avg();
}

