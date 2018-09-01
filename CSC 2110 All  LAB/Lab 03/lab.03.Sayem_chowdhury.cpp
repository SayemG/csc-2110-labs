#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int array_size = 5;
	int array1[array_size];
	cout << "please enter 5 integer" << endl;
	cout << "sample input: " << endl;
	for (int i = 0; i < 5; i++)
	{
		
		cin >> array1[i];
	}
	cout << "sample output:" << endl;
	for (int j = 0; j < 5; j++)
	{
		array1[j] = pow(array1[j], 3);
	}


	for (int k = 0; k < 5; k++)
	{
		cout << array1[k] << " ";
	}
	cout << endl;

	for (int l = 0; l < 5; l++)
	{
		if (array1[l] % 2 != 0)
		{
			cout << array1[l] << " ";
		}
	}
	cout << endl;

	for (int m = 4; m >=0 ; m--)
	{
		cout << array1[m] << " ";
	}
	cout << endl;
	return 0;
}

