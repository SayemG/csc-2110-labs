#include <iostream>
#include <string>

using namespace std;
#define ASIZE 8

void insertionSort(int vote[],string name[], int listLength)
{
	//complete me
}
string binarySearch(const int vote[], const string name[], int listLength, int searchItem)
{
	//complete me
}
int main() {
    
	string name[ASIZE];
	int vote[ASIZE];
      
	//read your input from input.txt here
    
	//Part1
  	insertionSort(vote, name, ASIZE);
    cout<<"Candidate\t"<<"Votes Received\t"<<endl;
    
	for (int i = 0; i<ASIZE; i++){
        cout<<name[i]<<"\t\t"<<vote[i]<<endl;
    }
    
    cout<<"The winner of the election is "<<name[ASIZE-1]<<endl;

	//Part2
	cout << "Please enter the vote number to be searched?\n";
	int x;
	cin >> x;
	cout << binarySearch(vote,name, ASIZE,x) << endl;
	  return 0;
}
