#include<iostream>
using namespace std;
class st{
	
	private:
		int s1,s2,total,avg;
		char name[10];
		public:
			void getrec(void)
			{
				cout<<"Enetr name="<<endl;
				cin>>name;
				cout<<"enter the s1="<<endl;
				cin>>s1;
				cout<<"Enter s2="<<endl;
				cin>>s2;
				total=s1+s2;
				avg=s1+s2/2;
			}
			void putrec(void)
			{
				cout<<" Name is"<<name<<endl;
				cout<<"s1="<<s1<<endl;
				cout<<"s2="<<s2<<endl;
				cout<<"total="<<total<<endl;
				cout<<"avg"<<avg<<endl;
			}
};
int main()
{
	st v;
	v.getrec();
	v.putrec();
}
