#include<iostream>
#include<string>
#include<exception>
#include<stdexcept>
#include<typeinfo>

using namespace std;

string getID()
{
	try
	{
		string SID = "123456789";
		//string SID ;
		cout << "Please enter your 9 digit WSU student ID:";
		cin >> SID; 
		cout << "ID:" << SID << endl;

		while (SID.length() == 9)
		{
			cout<<"Please enter your 9 digit WSU student ID:";
			cin >> SID;
			cout << "ID:" << endl;
		}
		
		if (SID.length() < 9)
			throw logic_error(" String Length Underflow");
		else if (SID.length() > 9)

		{
			throw logic_error(" string length overflow");
		}

		return SID;
	}

	catch (logic_error eobj)
	{
		cout << "Caught an Exception:" << eobj.what()<<endl;
		cout << "of type:" << typeid(eobj).name() << endl;
		return " 123"; // function should return a string because return type is string and exit from while loop	
	}
	
	catch (...)
	{
	cout << "Exception Occurs...."<<endl;
	return "123";// function should return a string
	}
}

int main()
{
	getID();
	return 0;
}




/*while (getID().length()==9)
{

}
*/