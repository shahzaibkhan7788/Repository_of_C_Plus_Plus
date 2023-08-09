#include<iostream>
#include<iomanip>
#include<cstring>
#include<stdlib.h>
using namespace std;
class vehicle
{
private:
char make[20];
char model[20];
char color[20];
int year;
int milage;
public:
void setter()
{
char q[20],k[20],l[20];
int s,t,r,v;
cout<<"ENTER THE DATA\n\n";
cout<<"Make:";
cin>>q;
cout<<"Model:";
cin>>k;
cout<<"Color:";
cin>>l;
cout<<"year:";
cin>>r;
cout<<"Milage:";
cin>>v;
cout<<endl<<endl;
strcpy(make,q);
strcpy(model,k);
strcpy(color,l);
year=r;
milage=v;
}
string get_make()
{
return make;
}

string get_model()
{
return model;
}

string get_color()
{
return color;
}

int get_year()
{
return year;
}

int get_milage()
{
return milage;
}
void display()
{
cout<<setw(50)<<"VEHICLE DATA"<<endl<<endl;
cout<<"Make of the Vehicle:"<<make<<endl;
cout<<"Model of the Vehicle:"<<model<<endl;
cout<<"Color of the Vehicle:"<<color<<endl;
cout<<"Milage of the Vehicle:"<<milage<<endl;
cout<<"Year of the Vehicle:"<<year<<endl<<endl;
}
};
class car:public vehicle
{
private:
int sunroof;
int rear_view_mirror;
public:
void set_car_data(int a,int b)
{
sunroof=a;
rear_view_mirror=b;
}
void display_car_data()
{
cout<<setw(50)<<"CAR DATA"<<endl<<endl;
cout<<"Sunroof of the car is:"<<sunroof<<endl;
cout<<"Rear view of the car is:"<<rear_view_mirror<<endl<<endl;

cout<<"Make of the car:"<<get_make()<<endl;
cout<<"model of the car:"<<get_model()<<endl;
cout<<"color of the car:"<<get_color()<<endl;
cout<<"year of the car:"<<get_year()<<endl;
cout<<"milage of the car:"<<get_milage()<<endl;
}
};


int main()
{
car obj;
int t,s;

obj.setter();
obj.display();
obj.setter();
obj.get_make();
obj.get_model();
obj.get_color();
obj.get_year();
obj.get_milage();

cout<<"Enter the data of the car:\n\n";
cout<<"Sunroof of the car:";
cin>>s;
cout<<"Rear view mirroe of the car:";
cin>>t;
obj.set_car_data(s,t);
obj.display_car_data();

}

