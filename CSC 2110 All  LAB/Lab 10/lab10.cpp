#include <iostream>
#include <string> 
using namespace std;
// Base class personType
class personType
{
public:
	void print()const;
	//Function to output the first name and last name
	//in the form firstName lastName.
	void setName(string first, string last);
	
	string getFirstName()const;
	string getLastName()const;
	personType(string first = "", string last = "");
	//Constructor
	//Sets firstName and lastName according to the parameters.
	//The default values of the parameters are null strings.
	//Postcondition: firstName = first; lastName = last  
private:
	string firstName; //variable to store the first name
	string lastName;  //variable to store the last name
};

void personType::print() const
{
	cout << "Person FirstName="<<firstName << " LastName=" << lastName<< endl;
}

void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

//constructor
personType::personType(string first, string last)

{
	firstName = first;
	lastName = last;
}
// --------------------Start your code from here

	

//--------------------driver program
int main()
{
	
	personType person1("Lisa", "Regan");
	doctorType doctor1("Sarah", "Conner", "Dentist");
	patientType patient1("Sam", "Fire",200,100,1916);
	billType b1(doctor1, patient1);
	b1.setCharge(250.66);
	cout << "<personType> Printing...\n";
	person1.print();
	cout << endl;
	cout << "<doctorType> Printing...\n";
	doctor1.print();
	cout << endl;
	cout << "<patientType> Printing...\n";
	patient1.print();
	cout << endl;
	cout << "<billType> Printing...\n";
	b1.print();
	cout << endl;
	return 0;
}