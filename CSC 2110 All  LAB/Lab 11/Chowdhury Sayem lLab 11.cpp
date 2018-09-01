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
	Car(double = 0.0, char = 'X', int = 0, char * = NULL); //constructor

	Car(const Car&); // copy constructor
	~Car();
	void showData();
};

Car::Car(double eng, char style, int cd, char* pt)
{
	engineSize = eng;
	bodyStyle = style;
	colorCode = cd;
	vinPtr = new char[strlen(pt) + 1];
	strcpy_s(vinPtr, strlen(pt) + 1, pt);
}

Car::Car(const Car& otherobject)
{
	engineSize = otherobject.engineSize;
	bodyStyle = otherobject.bodyStyle;
	colorCode = otherobject.colorCode;

	//vinPtr = otherobject.vinPtr;

	int len = strlen(otherobject.vinPtr);

	vinPtr = new char[len + 1];
	strcpy_s(vinPtr, len + 1, otherobject.vinPtr);

}


Car::~Car()
{
	delete[] vinPtr;
}

void Car::showData()
{
	cout << "The values for this object are:" << endl;



	cout << "Engine Size:" << engineSize << endl;
	cout << "Body style:" << bodyStyle << endl;
	cout << "Color code:" << colorCode << endl;
	cout << "VIN:" << vinPtr << endl;
}

// write your code here



int main()
{
	Car car1(250.0, 'S', 52, "ABC567YYY");
	Car car2(car1);
	car1.showData();
	car2.showData();

	return 0;
}