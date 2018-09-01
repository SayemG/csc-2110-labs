#include<iostream>
#include<time.h>
#include<string>
#include<iomanip>

using namespace std;

const int size=20;
int abc[size];

void search(int array[],int length,int key);
void selectionsort(int list[], int length);

int main() {
	srand(int(time(0)));
	int searchitem;
	cout << "Please enter the key you want to search in Array: ";
	cin >> searchitem;
	cout << endl;
	search(abc,20,searchitem);
	selectionsort(abc, 20);
	for (int x = 0; x < size; x++)
		cout << setw(3) << abc[x];
	cout << endl<<endl;
	return 0;
}

void search(int array[], int length, int key) //defination of function search
{
	srand(int(time(0)));
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 10 + 1;
		cout << setw(3) << array[i];
	}
	cout << endl;
	int loc = 0;
	int count = 0;
	while (loc < length)
	{
		if (array[loc] == key)
		{
			count = count++;
		}

		loc++;
	}
	if (count > 0)
	{
		cout <<"key "<< key << " has found and occurance is "<<count << endl<<endl;
	}
	else
	{
		cout <<"key "<< key << " has not found" << endl;
	}
}


void selectionsort(int list[], int length) //defination of function selectionsort

{
	int index;
	int location; 
	int largestindex;
	int temp;

	for (index = 0; index < length - 1; index++)				
		                                                                                          //	for (index = 0; index <= length - 1; index++)  might be cause out of bounds
	{   
	     largestindex = index;
		
		 for (location = index + 1; location < length; location++)                                // inner for loop
		 {
			 if (list[location] > list[largestindex])
			 {
				 largestindex = location;
			 }
		 }
		temp = list[largestindex];
		list[largestindex] = list[index];
		list[index] = temp;
		                                                                                           //cout << setw(3)<<list[index] ; 
	}cout << endl;
}