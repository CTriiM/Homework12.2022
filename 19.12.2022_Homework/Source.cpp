#include<iostream>
using namespace std;
//#define TASK1
//#define TASK2
//#define TASK3
//#define TASK4
//#define TASK5
//#define TASK6
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество иттераций: "; cin >> n;

	
#ifdef TASK1
	for (int i = 0; i < n; i++) cout << "*****" << endl;
#endif // TASK1

#ifdef TASK2

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif // TASK2

#ifdef TASK3
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif // TASK3

#ifdef TASK4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
			for (int j = 0; j <= i; j++)
			{
				cout << " ";
				cout << endl;
			}
		}
		cout << endl;

	}
#endif // TASK4

	
#ifdef TASK5
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
			for (int j = 0; j < i; j++)
			{
				cout << "* " << endl;
			}
			cout << endl;
		}

	}
#endif // TASK5

#ifdef TASK6
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)   cout << " ";  cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " ";	cout << "\\";
		cout << endl;

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)        cout << " "; cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++) cout << " "; cout << "/";
		cout << endl;

	}

#endif // TASK6

}