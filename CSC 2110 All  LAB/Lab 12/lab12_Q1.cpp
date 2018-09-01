#include<iostream>
#include<math.h>
#include<string>
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

int main() {
	Triangle t;
	Circle c;
	c.setDims(4);
	t.setDims(3, 4, 5);

	describeShape(t);
	describeShape(c);

	return 0;
}
