#include<iostream>
using namespace std;
class x{
	private:
		int m;
		public:
		();
		{
		
		m=100;
	}
		friend int abc (x,y,z);
};
class y{
	private:
	int n;
	public:
	y()
	{
		n=10;
	   }   
	   friend int abc(x,y,z);
	
};
class z{
private:
int l;
public:
z()
{
	l=20;
}
	friend int abc (x,y,z);
	)
};
main()
{
	x  a;
	y  b;
	z  c;
}
cout<<"sum is"<<abc<<(a,b,c);
}
int abc(x s1,y s2,z s3)
{
	return (s1.m+s2.n+s3.l);
}




