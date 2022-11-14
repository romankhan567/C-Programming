#include<iostream>
using namespace std;
class emp{
	private:
		char name [30];
		float bpay,hrent,ma,gbay;
		public:
			void input(void)
			{
				cout<<"Enter name of Employ"<<endl;
				cin>>name;
				cout<<"Enter basicpay of employ"<<endl;
				cin>>bpay;
			}
			void allow(void)
			{
				hrent=bpay*60/100;
				ma=bpay*20/100;
				gbay=bpay+hrent+ma;
	}
	void display(void)
	{
		cout<<"Name of Employe"<<name<<endl;
		cout<<"Baisc pay"<<bpay<<endl;
		cout<<"house rent"<<hrent<<endl;
		cout<<"medical allowance"<<ma<<endl;
		cout<<"Net pay"<<gbay<<endl;
	}
};
int main()
{
	  emp r;
	  r.allow();
	  r.input();
	  r.display();
}
