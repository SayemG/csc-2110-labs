#include<iostream>
#include<string>
using namespace std;

class DimError {
private:
	string message;
public:
	//implement the methods
};

class Rectangle {
private:
	int length, width;
public:
	//implement the methods
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
	} catch (DimError de) {
		cout << "Couldn't set the rectangle's dimensions: " << endl
			 << de.what() << endl;
	}
	cout << "Exiting..." << endl;
	return 0;
}	
