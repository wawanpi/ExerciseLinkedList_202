#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};
class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** Kurniawan, Node** Muhammad);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedList::addNode() { //write your answer here
	//Menambahakan newnood dengan data noor dan nama
	int nomor;
	string nama;
	cout << "\nEnter the roll number : ";
	cin  >> nomor;
	cout << "\nEnter the name  : ";
	cin >> nama;


	Node* newNode = new Node();                              
	newNode->rollNumber = nomor;                                      
	newNode->name = nama;
	if (nomor <= nomor) {
		if (nomor == nomor) {
			cout << "\nDuplicate number not Allowed" << endl;
			return;
		}



bool CircularLinkedList::search(int rollno, Node** Kurniawan, Node** Muhammad) {
	*Kurniawan = LAST->next;
	*Muhammad = LAST->next;
	while (*Muhammad != LAST) {
		if (rollno == (*Muhammad)->rollNumber) {
			return true;
		}
		*Kurniawan = *Muhammad;
		*Muhammad = (*Muhammad)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
bool CircularLinkedList::delNode() { //write your answer here
	Node* Kurniawan, * Muhammad;
	LAST->next = Kurniawan;
}
void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is empty\n";
	}
	else {
		cout << "\nRecords in the list are:\n";
		Node* MuhammadNode = LAST->next;
		while (MuhammadNode != LAST) {
			cout << MuhammadNode->rollNumber << " " << MuhammadNode->name << endl;
			MuhammadNode = MuhammadNode->next;
		}
		cout << LAST->rollNumber << " " << LAST->name << endl;
	}
}
int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the records in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";
			char ch;
			cin >> ch;
			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}

