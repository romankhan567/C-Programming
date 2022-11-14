#include<iostream>
using namespace std;
int main()
{
int a,b;
char op;
cout<<"1st value"<<endl;
cout<<"operator"<<endl;
cout<<"2nd value"<<endl;
cin>>a>>op>>b;
switch(op)
          {             case'+':
	          cout<<"Add"<<(a+b)<<endl;
	          break;
	          case'-':
	          cout<<"Subt"<<(a-b)<<endl;
	          break;
		      case'*':
			  cout<<"mul"<<(a*b)<<endl;
			  break;
			  case'/':
			  cout<<"DIV"<<(a/b)<<endl;
			  break;
			  default:
			  cout<<"invalid"<<endl;
				
	
          }
	
	
}
