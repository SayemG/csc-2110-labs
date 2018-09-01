#include<iostream>
#include<fstream>
using namespace std;

// Lab 24 
//Chowdhury Sayem

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
	int num, pos;
	cout << "Please enter the number: ";
	cin >> num;
	cout << "Please enter the number after which you want to insert: ";
	cin >> pos;

	bool found = false;
	node *temp = current_head;
	node *newNode = new node;
	newNode->data = num;

	while (temp != nullptr && !found)
	{
		if (temp->data == pos)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			found = true;
			cout << "Number inserted into the list" << endl;
		}
		temp = temp->next;
	}

	if (found == false)
	{
		cout << " sorry! The number you want to insert was not found." << endl;
	}
}


void printList(node *current_head)
{
	cout << "\nLinked List:";
	while (current_head != NULL)
	{
		cout << current_head->data << " ";
		current_head = current_head->next;
	
	}
	cout << endl;
}

void frequency(node *head)
{
	node *temp = head;
	int num, count = 0;
	cout << "Please enter the number you want to count: ";
	cin >> num;

	while (temp != nullptr)
	{
		if (temp->data == num)
			count++;
		temp = temp->next;
	}

	if (count != 0)
		cout << "Frequency = " << count << endl;
	else
		cout << "sorry The  number is not found in the list." << endl;
}


void sort(node *head)
{
	int temp;

	for (node *i = head; i->next != NULL; i = i->next)
	{
		for (node *j = i->next; j != NULL; j = j->next)
		{
			if (i->data > j->data)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
	cout << "The list is already sorted." << endl;
} 

void deleteLast(node *head)
{
	node *temp = head;

	if (head == nullptr)
	{
		cout << "The list is empty." << endl;
	}
	else
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = NULL;
		cout << "The last node is  deleted." << endl;
	}

}