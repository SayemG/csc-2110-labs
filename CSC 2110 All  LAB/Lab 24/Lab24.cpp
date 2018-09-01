#include<iostream>
#include<fstream>
using namespace std;

typedef struct node
{
	int data;
	node *next;
};

node *insertEnd(node *head, int val);
void insertPos(node *head);
void deleteLast(node *head);
void frequency(node *head);
void sort(node *head);
void printList(node *head);
void showMenu();

int main()
{
	node *head = NULL;
	int input, val;

	ifstream fin;
	fin.open("input.txt");
	while (fin >> val)
		head = insertEnd(head, val);


	while (true) {
		showMenu();
		cin >> input;
		switch (input){
		case 1:
			insertPos(head);
			break;
		case 2:
			deleteLast(head);
			break;
		case 3:
			frequency(head);
			break;
		case 4: sort(head);
			break;
		case 5: printList(head);
			break;
		case 6: return 0;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
	return 0;
}


node *insertEnd(node *current_head, int val)
{
	node *temp;
	temp = current_head;

	if (temp == NULL){
		node* newnode = new node;
		newnode->data = val;
		newnode->next = current_head;
		return newnode;
	}

	while (temp->next != NULL)
		temp = temp->next;

	node* newnode = new node;
	newnode->data = val;
	newnode->next = NULL;
	temp->next = newnode;
	return current_head;
}

void showMenu() {
	cout << "1. Add a number in a particular position.\n";
	cout << "2. Delete the last element.\n";
	cout << "3. Count a particular number.\n";
	cout << "4. Sort the numbers.\n";
	cout << "5. Print list.\n";
	cout << "6. Quit\n";
	cout << "Please enter a choice: ";
}

void insertPos(node *current_head)
{

}


void printList(node *current_head)
{

}

void deleteLast(node *head)
{

}


void frequency(node *head)
{

}

void sort(node *head)
{

}