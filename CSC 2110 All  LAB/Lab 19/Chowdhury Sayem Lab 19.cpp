#include<iostream>
#include<string>
using namespace std;

class DimError {
private:
	string message;
public:
	
	//implement the methods
	DimError( string str)
	{
		message = str;
	}

	string what()
	{
		return message;
	}

};

class Rectangle {
private:
	int length, width;
public:
	//implement the methods
	int area()
	{
		return length*width;
	}
	void setWidth(int wid)
	{
		

		if (wid > 0)
			width = wid;
		else 
	
			throw DimError("setWidth called with a negarive width");

		
	}

	void setLength(int len)
	{
		if (len > 0)
			length = len;
		else 
				throw DimError(" setLength called with a negative length ");
			
	}
};

int main(void) {
	Rectangle r;
	try {
		while (true) {
			int l, w;
			cout << "Enter a length: ";
			cin >> l;
			cout << "Enter a width: ";
			cin >> w;
			r.setLength(l);
			r.setWidth(w);
			cout << "The area is: " << r.area() << endl;
			
		
		}
	}
	catch (DimError de) {
		cout << "Couldn't set the rectangle's dimensions: " << endl
			<< de.what() << endl;
	}
	cout << "Exiting..." << endl;
	return 0;
}

