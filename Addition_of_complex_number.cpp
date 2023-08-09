#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
public:
	int real;
	int img;

	complex operator +(complex obj)
	{
		complex temp;
		temp.real = real + obj.real;
		temp.img = img + obj.img;

		return temp;
	}


	complex operator -(complex obj)
	{
		complex temp;
		temp.real = real - obj.real;
		temp.img = img - obj.img;
		return temp;
	}

};
int main()
{
	complex obj1;
	complex obj2;
	complex obj3;
	complex obj4;
	int option;
	cout << "Enter the first comple number:";
	cin >> obj1.real >> obj1.img;
	cout << "Enter the 2nd comlex Number:";
	cin >> obj2.real >> obj2.img;

	while (1)
	{
		cout << endl;
		cout << "Enter the option:";
		cout << "To Add a complex Number\nTo subtract a complex Number\nTo exit a function\n";
		cin >> option;
		if (option == 1)
		{
			obj3 = obj1 + obj2;
			cout << "Addition of real complex Number is:" << obj3.real << endl;
			cout << "Addition of imaginary complex Number is:" << obj3.img << endl;
			cout << endl;
		}
		if (option == 2)
		{
			obj4 = obj1 - obj2;
			cout << "Subtraction of real complex Number is:" << obj4.real << endl;
			cout << "Subtraction of imaginary complex Number is:" << obj4.img << endl;
		}
		if (option == 3)
		{
			exit(0);
		}
	}

}
