#include<iostream>
#include<math.h>
using namespace std;

class Shape {
public:
  virtual string getType() = 0;
  virtual double getPerimeter() = 0;
  virtual double getArea() = 0;
};

//Implement class Triangle here

//Implement class Circle here


void describeShape(Shape &s) {
	double a = s.getArea();
	double p = s.getPerimeter();
	string t = s.getType();

	cout << "This " << t << " has a perimeter of: " << p
		<< " and an area of: " << a << endl;
}

/**
* Determines the larger are between the two Shape objects
* The larger area is stored in result
*/
void largerArea(Shape &a, Shape &b, double *result) {
//Complete the function 
}


int main() {
	Triangle t;
	Circle c;
	c.setDims(2);
	t.setDims(3, 4, 5);

	describeShape(t);
	describeShape(c);

	double result;
	largerArea(t, c, &result);
	cout << "The larger area is: " << result << endl << endl;

	t.setDims(6, 8, 10);
	describeShape(t);
	describeShape(c);
	largerArea(t, c, &result);
	cout << "The larger area is: " << result << endl;


	return 0;
}
