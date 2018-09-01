#include <iostream>
using namespace std;
 
class rectangle
{
public:
	rectangle(int len, int wid); //Parameterized Constructor
	rectangle();                //Default Constructor; Default length is 20 and default width is 10 

	void setWidth(int newWid); //Mutator function
	void setLength(int newLen);//Mutator function


	int getWidth() const;//Accessor function
	int getLength() const;//Accessor function


	void printRectangle(); //Print function

	int getArea();//Find Area; hint: Area is width * length
	int getPrimeter();//Find Perimeter; hint: Perimeter is (width + length)*2

	bool equals(const rectangle& otherRectangle) const; //Comparison function
	

private:
	int length;  //variable to store length
	int width; //variable to store width

};

//Start your class functions codes from here!


// Driver program for the rectangle class
int main()
{
	rectangle s1;
	rectangle s2(5, 20);
	rectangle s3;

	//Display rectangles
	cout << "Rectangle s1 ";
	s1.printRectangle();
	cout << "Rectangle s2 ";
	s2.printRectangle();
	cout << "Rectangle s3 ";
	s3.printRectangle();
	// Test Equality
	if (s1.equals(s2))
		cout << "s1 and s2 are equal rectangle!" << endl;
	else
		cout << "s1 and s2 are unequal rectangle!" << endl;

	if (s1.equals(s3))
		cout << "s1 and s3 are equal rectangle!" << endl;
	else
		cout << "s1 and s3 are unequal rectangle!" << endl;
	//Display area and perimeter
	cout << "Area of s1=" << s1.getArea() << endl;
	cout << "Area of s2=" << s2.getArea() << endl;
	cout << "Perimeter of s1=" << s1.getPrimeter() << endl;
	cout << "Perimeter of s2=" << s2.getPrimeter() << endl;

	
	return 0;
}