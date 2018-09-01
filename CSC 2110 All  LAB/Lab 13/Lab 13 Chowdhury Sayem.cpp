#include<iostream>
#include<cctype>
#include<string>
#include<cstring>

using namespace std;

#define LEN 128
void stringManipulator(char *inputCstr);
int main()
{
	char *str;
	str = new char[LEN];
	cout << "Please input the string:"<<endl;
	cin.getline(str, LEN);

	cout << "Manipulated String:" << endl;
	stringManipulator(str);
	cout << endl;


	return 0;
}


void stringManipulator(char *inputCstr)

{
	for (int i = 0; i < 128; i++)
	{
		if (i % 2 != 0)
		{
			inputCstr[i] = toupper(inputCstr[i]);
		}  
		else if (i % 2 == 0)

		{
			inputCstr[i] = tolower(inputCstr[i]);
		}

		
		
	}

	cout << inputCstr;

}