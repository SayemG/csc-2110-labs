#include<iostream>
#include<math.h>
#include<string>

using namespace std;
//void describeShape(Shape &s);

class Shape {
public:
	virtual string getType() = 0;
	virtual double getperimeter() = 0;
	virtual double getArea() = 0;

};

//Implement class Triangle here

class Triangle :public Shape
{
public:

	void setDims(double s11, double s12, double s13)
	{
		s1 = s11;
		s2 = s12;
		s3 = s13;
	}

	double getArea()
	{
		double s = ((s1 + s2 + s3) / 2);
		return (sqrt(s*(s - s1)*(s - s2)*(s - s3)));
	}

	double getperimeter()
	{
		return (s1+s2+s3);
	}

	string getType()
	{
		return " Triangle ";
	}
private:
	double s1, s2, s3;
};


//Implement class Circle here
class Circle :public Shape
{
public:
	void setDims(double rds)
	{
		r = rds;
	}
	double getArea()
	{
		return ((3.1416*pow(r,2)));
	}
	double getperimeter()
	{
		return 2* 3.1416* r;
	}
	string getType()
	{
		return " Circle ";
	}

private:
	double r;
};

void describeShape(Shape &s) {
	double a = s.getArea();
	double p = s.getperimeter();
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
	if (a.getArea() > b.getArea())
	{
		*result = a.getArea();
	}
	else
	{
		*result = b.getArea();
	}
}
int main()
{
	Triangle t;
	Circle c;


	cout << "Q.(1) Output" << endl << endl;
	c.setDims(4);
	t.setDims(3, 4, 5);

	describeShape(t);
	describeShape(c);
	cout << endl << endl;

	cout << " Q.(2) Output" << endl<<endl;

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