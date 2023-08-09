#include<iostream>
#include<stdlib.h>
using namespace std;
class student_class
{
public:
	int student_data[10];


	student_class operator +(student_class obj1)
	{
		student_class obj2;
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			obj2.student_data[i] = student_data[i] + obj1.student_data[i];
		}

		return obj2;
	}

	student_class operator -(student_class obj1)
	{
		student_class obj3;
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			obj3.student_data[i] = student_data[i] - obj1.student_data[i];
		}


		return obj3;
	}



	student_class operator %(student_class obj1)
	{
		student_class obj4;
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			obj4.student_data[i] = student_data[i] % obj1.student_data[i];
		}

		return obj4;
	}


};


int main()
{


	int option;
	student_class batch_1;
	student_class batch_2;
	student_class batch_3;
	student_class batch_4;
	student_class batch_5;




	cout << "Enter the data of the first batch students:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Data of student#" << i + 1 << " is: ";
		cin >> batch_1.student_data[i];
	}
	cout << endl;
	cout << "Enter the data of the 2nd batch students:\n";
	for (int j = 0; j < 10; j++)
	{

		cout << "Data of student#" << j + 1 << " is: ";
		cin >> batch_2.student_data[j];

	}





	while (1)
	{
		cout << "Enter the option\n";
		cout << endl;
		cout << "Add data of the respected batches\nSubtract the data";
		cout << "of the respected batches\nFind the count of greater value\n";
		cin >> option;
		cout << endl;

		if (option == 1)
		{
			batch_3 = batch_1 + batch_2;
			cout << "Addition of the respected batches of the student data is:" << batch_3.student_data[10] << endl;
		}

		if (option == 2)
		{
			batch_4 = batch_1 - batch_2;
			cout << "Subtraction of the respected batches of the student data is:" << batch_4.student_data[10] << endl;
		}

		if (option == 3)
		{
			batch_5 = batch_1 % batch_2;
			cout << "The greater index of the respected batches of the student data is:" << batch_5.student_data[10] << endl;
		}

		if (option == 4)
		{
			exit(0);
		}
	}
	return 0;
}



