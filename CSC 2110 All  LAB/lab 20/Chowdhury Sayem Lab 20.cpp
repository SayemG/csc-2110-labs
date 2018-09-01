#include<iostream>
#include<string>
using namespace std;

int freq( string str, int idx, char n )
{
	int count;
	if (str.size() == idx && str[idx]!= n)
		return 0;
	if (str.size() != idx && str[idx] == n)
		return 1 + freq(str, idx + 1, n);
	else
		return freq(str, idx + 1, n);

}


int main()
{
	string abc;
	int i = 0;
	char c;
	cout << "Please input a string :";
	getline(cin, abc);
		cout << endl;
		cout << "Please input a character to count :";
		cin >> c;
		cout << endl;
	
		cout <<c<< " occurs   " <<freq(abc, i, c) << " times in a string of characters" << endl;

	return 0;
}
