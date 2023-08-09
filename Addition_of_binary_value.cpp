
#include<iostream>
#include<stdlib.h>
using namespace std;
class Binvalue
{
public:
int binary_value;

};

int main()
{
int len,i,binary1;
Binvalue obj1,obj2;
int remainder=0;
int j=0;
int sum[20];
int option;
       
	cout<<"Enter the first binary binary number:";
	cin>>obj1.binary_value;
         cout<<"Enter the 2nd binary binary number:";
	cin>>obj2.binary_value;



cout<<"Enter the option\n"<<endl;
cout<<"Add Binary number\nSubtract Binary number\nexit the function\n";
cin>>option;

while(1)
{

if(option==1)
{
       while(obj1.binary_value!=0||obj2.binary_value!=0){
         sum[j++] =  (obj1.binary_value %10 + obj2.binary_value %10 + remainder ) % 2;
         remainder = (obj1.binary_value %10 + obj2.binary_value%10 + remainder ) / 2;
         obj1.binary_value = obj1.binary_value/10;
         obj2.binary_value = obj2.binary_value/10;
       
    }

    if(remainder!=0)
         sum[j++] = remainder;

    --i;
    cout<<"Summmation of two binary numbers:";
    while(j>=0)
         cout<<sum[j--];
}
if(option==3)
{
exit(0);
}

}
   }


