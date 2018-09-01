#include<iostream>
#include<string>
#include<vector>
using namespace std;

void add(vector<int> &num)
{
	cout << "please enter number" << endl;
	int num1;
	cin >> num1;
	num.push_back(num1);

}
//Prompts the user to provide a number and add that number
//into the vector
void remove(vector<int> &num)
{
	cout << "please enter number you want to remove" << endl;
	int num2;
	cin >> num2;
	bool found = false;
	for (int i = 0; i < num.size(); i++)

	{
		if (num2 == num[i]);
		num.erase(num.begin() + i);
		found = true;
		
	}
	if
		(found == true)
	{
		cout << " Number removed Successfully" << endl;
	}
	if (found == false)
	{
		cout << "Number not Found" << endl;
	}

}

void show(vector<int>&num)
{
	cout << " The numbers are:";
	for (int i = 0; i < num.size(); i++)
		cout << num[i] << " ";
}

//Prompts the user to provide a number.If the number is
//found in the vector, it removes that number.Otherwise, it
//generates a message.
void empty(vector<int> &num)
{
	num.clear();
	cout << "Num Cleared Successfully" << endl;

}
//Erases all the existing numbers from the vector.
void count(vector<int> &num)
{
	cout << " Size is:" << num.size() << endl;
}
//Counts the total available numbers in the vector.
void showMenu()
{
	cout << "1.Add a number" << endl;
	cout << "2.Remove a number" << endl;
	cout << "3.Empty a database" << endl;
	cout << "4.Count The numbers" << endl;
	cout << "5.Show the numbers" << endl;
	cout << "6.Quit" << endl;

}
//Show the existing members of the vector(order does not
//matter).It will generate a message if there is no existing
//member available.
//Do not use any global variable.Write necessary lines to test your code.Submit






int main(){
	vector<int> number;
	int input;
	while (true) {
		showMenu();
		cin >> input;
		switch (input){
		case 1: add(number);
			break;
		case 2: remove(number);
			break;
		case 3: empty(number);
			break;
		case 4: count(number);
			break;
		case 5: show(number);
			break;
		case 6: return 0;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
	return 0;
}