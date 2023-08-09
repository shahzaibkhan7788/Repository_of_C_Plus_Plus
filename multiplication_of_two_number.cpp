#include<iostream>
#include<iomanip>
#include<cstring>
#include<stdlib.h>
using namespace std;
class M
{
protected:
int m;
public:
void set_m(int a)
{
m=a;
}
};
class N
{
protected:
int n;
public:
void set_n(int b)
{
n=b;
}
};
class P:public M,public N
{
public:

void display()
{
cout<<"Value of M is:"<<m<<endl;
cout<<"Value of N is:"<<n<<endl;
cout<<"Product of M and N is:"<<m*n<<endl<<endl;
}

};

int main()
{
  P obj;
  obj.set_m(12);
  obj.set_n(4);
   obj.display();
}

