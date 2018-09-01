#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main(){
	vector<int> number;
	int input;
	while (true) {
		showMenu();
		cin >> input;
		switch (input){
		case 1: add(number);
			break;
		case 2: remove(number);
			break;
		case 3: empty(number);
			break;
		case 4: count(number);
			break;
		case 5: show(number);
			break;
		case 6: return 0;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
	return 0;
}
