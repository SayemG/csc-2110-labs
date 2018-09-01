#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	node *next;
};

node *insertBegin(node *current_head)
{
	node* newnode = new node;
	cout << "Please enter the number: ";
	cin >> newnode->data;
	newnode->next = current_head;
	cout << "Number inserted into the list.\n";
	return newnode;
}



node *insertEnd(node *head);
void printList(node *head);
void showMenu();

int main()
{
	node *head = NULL;
	int input;
	while (true) {
		showMenu();
		cin >> input;
		switch (input){
		case 1:
			head = insertEnd(head);
			break;
		case 2:
			printList(head);
			break;
		case 3: return 0;
			break;
		default:  cout << endl;
		}
		cout << endl;
	}
	return 0;
}
