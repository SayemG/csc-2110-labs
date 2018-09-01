#include <iostream>
using namespace std;

class Car
{
private:
	double engineSize;
	char bodyStyle;
	int colorCode;
	char *vinPtr;
public:
	Car(double = 0.0, char = 'X', int = 0, char * = NULL);  //constructor
	Car(const Car&); // copy constructor
	~Car();
	void showData();
};



// write your code here



int main()
{
	Car car1(250.0, 'S', 52, "ABC567YYY");
	Car car2(car1);
	car1.showData();
	car2.showData();

	return 0;
}