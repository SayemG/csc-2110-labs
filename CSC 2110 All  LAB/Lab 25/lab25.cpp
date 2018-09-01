#include<iostream>
#include<string>
using namespace std;

class Stack {
public:
	Stack() {
		Stack(10);
	}
	Stack(int capacity) : cap(capacity - 1), top(0) {
		data = new char[capacity];
	}
	~Stack() {
		delete data;
	}
	void push(char value);
	char pop();
	bool isEmpty();
private:
	int top, cap;
	char *data;
};

void Stack::push(char value) {
	if (top == cap) {
		/* Full stack */
		return;
	}
	data[top++] = value;
}

char Stack::pop() {
	if (top == 0) {
		/* Empty stack */
		return '\0';
	}
	return data[--top];
}

bool Stack::isEmpty() {
	return top == 0;
}

int main(void) {
	cout << "Enter an expression" << endl;
	string str;
	getline(cin, str);	
	Stack s(15);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			continue;
		}
		/*
		 * Complete me
		 */
	}
	/*
	 * Complete me
	 */
	return 0;
}