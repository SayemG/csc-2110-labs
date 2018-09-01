#include<iostream>
#include<cmath>
using namespace std;

/*
 * Definition of class House goes here 
 */

/*
 * Remainder of file remains unchanged
 */
int main(void) {
	House myHouse(3, 1, 3, 2001);
	House yourHouse;

	int input;
	cout << "How many bedrooms does your house have? ";
	cin >> input;
	yourHouse.setBeds(input);

	cout << "How many bathrooms does your house have? ";
	cin >> input;
	yourHouse.setBaths(input);

	cout << "How many cars fit in your garage? ";
	cin >> input;
	yourHouse.setCars(input);

	cout << "What year was your house built? ";
	cin >> input;
	yourHouse.setYear(input);

	int diff = myHouse.getBeds() - yourHouse.getBeds();
	cout << "Your house has " << abs(diff) << (diff < 0 ? " more" : " fewer") << " bedrooms" << endl;

	diff = myHouse.getBaths() - yourHouse.getBaths();
	cout << "Your house has " << abs(diff) << (diff < 0 ? " more" : " fewer") << " bathrooms" << endl;

	diff = myHouse.getCars() - yourHouse.getCars();
	cout << "Your garage holds " << abs(diff) << (diff < 0 ? " more" : " fewer") << " cars" << endl;

	diff = myHouse.getYear() - yourHouse.getYear();
	cout << "Your house was built " << abs(diff) << " years" << (diff < 0 ? " after" : " before") << " my own." << endl;

	return 0;
}