#include<iostream>
using namespace std;
class person
{
public:
int a,b;

person()
{
cout<<"default constructor";
}
person(int c,int d)
{
a=c;
b=d;
cout<<"a="<<a<<"b="<<b;
}
};
int main()
{
person e;
person b(10,20);
return 0;
}