#include<iostream>
using namespace std;
class sum{
	private:
		int n,m;
		public:
			void get (void)
			{
	cout<<"Enter 1st value"<<endl;
cin>>n;
cout<<"Enter 2nd value"<<endl;
cin>>m;
			}
			int avg=n+m/2;
			void display (void)
			{
				cout<<"sum is:"<<n+m;
				cout<<"avg is"<<avg;
		}
};
main()
{
sum s;
int x,y,z;
s.get();
s.display();

}

