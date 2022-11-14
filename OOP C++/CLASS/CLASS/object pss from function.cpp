#include<iostream>
using namespace std;
class roman{
	
	private:
		char name[12];
		public:
			void get (void)
			{
				cout<<"Name"<<endl;
				cin>>name;
			}
			void print (roman s)
			{
				cout<<"name is="<<s.name<<endl;
			}
};
int main()
{
	roman temp;
	temp.get();
	temp.print(temp);
}f
