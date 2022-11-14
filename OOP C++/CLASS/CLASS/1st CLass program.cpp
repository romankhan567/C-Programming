#include<iostream>
using namespace std;
class edate
{
	private:
		int y,m,d;
		public:
		void gdate (void)
			{
				cout<<"Enter the year:";
				cin>>y;
				cout<<"Enter the month:";
				cin>>m;
				cout<<"Enter the day:";
				cin>>d;
			}
			void pdate (void)
			{
				cout<<d<<"/"<<m<<"/"<<y;

			void display(void)
			{

			}
			void data(void)
			{

			}
};
main()
{
	edate b;
	b.gdate();
	b.pdate();
}
