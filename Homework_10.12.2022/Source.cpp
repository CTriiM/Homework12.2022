#include<iostream>
using namespace std;
//#define TASK1
void main()
{
	setlocale(LC_ALL, "Rus");

	//TASK1

#ifdef TASK1
	const int n = 5;
	for (int i = 0; i < n; i++)
	{
		//for(int j = 0; j<=4; )
		cout << "******" << endl;
	}
#endif // TASK1


	//TASK2
	//char y='*';
	const int v=5;
	string t = "*";
	for (int i = 0; i < v; i++)
	{
		if (i == 0)
			cout << "*" << endl;
		if (i == 1)
			cout << "**" << endl;
		if (i == 2)
			cout << "***" << endl;
		if (i == 3)
			cout << "****" << endl;
		if (i == 4)
			cout<< "*****" << endl;


		/*for (int j = 1; j<v; j++)
		{
			cout << y * j << endl;
		}*/

	}


}