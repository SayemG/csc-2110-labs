#include<iostream>
#include<string>
using namespace std;


/*
	* Definition of class House goes here
	*/
class House
{
public:
	House()     {
		 bedroom = 0; 
		 bathroom = 0; 
		 car_fit = 0; 
		housebuilt = 0; 
	};
	House(int a, int b, int c, int d) { 
		bedroom = a; 
		bathroom = b; 
		 car_fit = c; 
		 housebuilt = d; 
	};

	void setBeds(int bedr){ bedroom = bedr; };
	void  setBaths(int bathr) { bathroom = bathr; };
	void setCars(int carn){ car_fit = carn; };
	void  setYear(int yr){ housebuilt = yr; };

	int getBeds(){ return bedroom; };
	int getBaths(){ return bathroom; };
	int getCars(){ return car_fit; };
	int getYear(){ return housebuilt; };


private:

	int bedroom;
	int bathroom;
	int car_fit;
	int housebuilt;

};



	/*
	* Remainder of file remains unchanged
	*/
	int main(void) 
	{
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



