#include<iostream>
#include<iomanip>
#include<cstring>
#include<stdlib.h>
using namespace std;
class Rectangle
{
private:
float length;
public:
float width;
void get_function()
{
Rectangle obj;
cout<<"Enter the Length of the Rectangle:";
cin>>length;
cout<<"Enter the Length of the Rectangle:";
cin>>width;
}
float get_length()
{
return length;
}
};
class RectArea:public Rectangle
{
private:
float area;
public:
void Rec_Area()
{
area=width*get_length();
}
void display()
{
cout<<"Length of the Rectangle is:"<<get_length()<<endl;
cout<<"width of the Rectangle is:"<<width<<endl;
cout<<"Length of the Rectangle is:"<<area<<endl<<endl;
}

};


int main()
{
  RectArea obj;
  obj.get_function();
  obj.get_length();
  obj.Rec_Area();
   obj.display();
}

