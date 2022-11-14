
#include<iostream>
using namespace std;
class A{
 private:
     int a;
 public:
    void getvalue-a(int x);
    int get-a(void);
};
//now inheretance is writing
class B:public A
{

int b,c;
public:
    void getvalueb(int);
    void add(void);
    void dispval();
};
//Now Using Scope Resolution Operator
void A::getvalue-a(int x)
{
    a=x;
}
int A::get-a(void)
{
return a;

}
void B::getvalueb(int)
{
    c=c+b;
}
void B::add(void)
{

}
void B::dispval();
{

}

