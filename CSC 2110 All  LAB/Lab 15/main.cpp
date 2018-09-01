#include "Vector.h"
#include <iostream>
using namespace std;

int main(void) {
	
	float x, y;
	cout << "Enter the space separated x and y values for the first vector (v1): ";
	cin >> x >> y;
	Vector v1(x, y);
	cout << "Vector v1: " << v1 << endl;
	
	cout << "Enter the space separated x and y values for the second vector (v2): ";
	cin >> x >> y;
	Vector v2(x, y);
	cout << "Vector v2: " << v2 << endl;

	cout << "v1 + v2: " << v1 + v2 << endl;
	cout << "v1 - v2: " << v1 - v2 << endl;

	return 0;
}
