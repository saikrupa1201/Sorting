//============================================================================
// Name        : SortingAlgo.cpp
// Author      : Saikrupa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../include/ISort.h"
#include "../include/BubbleSort.h"
#include "../include/InsertionSort.h"
#include "../include/SelectionSort.h"
#include "../include/LinkedList.h"
#include <iostream>
using namespace std;

void sorting();
void ds();

int main() {

	int what;

	cout << "1. Sorting Algorithms" << endl;
	cout << "2. Data structures" << endl;

	cin >> what;

	switch (what) {
	case 1: {
		sorting();
		break;
	}
	case 2:
		ds();
		break;
	}

	return 0;
}

void sorting() {

	ISort* sort;
	int* sorted;
	int sorting_type;
	int array[] = { 76, 92, 21, 85, 12, 65 };
	string sarray[] = { "Apple", "Merry", "Paint", "Cold", "Bent", "Dean" };

	while (true) {
		cout << "Sorting Algorithms" << endl;
		cout << "1. Bubble Sort" << endl;
		cout << "2. Insertion Sort" << endl;
		cout << "3. Selection Sort" << endl;

		cout << "Enter sorting type" << endl;

		cin >> sorting_type;

		if (sorting_type < 1 || sorting_type > 3) {
			return;
		}

		switch (sorting_type) {
		case 1:
			sort = new BubbleSort;
			cout << "Unsorted Array" << endl;
			sort->print_num(array, 6);
			sorted = sort->sort_numeric(array, 6);
			cout << "Sorted Array" << endl;
			sort->print_num(sorted, 6);
			break;
		case 2:
			sort = new InsertionSort;
			cout << "Unsorted Array" << endl;
			sort->print_num(array, 6);
			sorted = sort->sort_numeric(array, 6);
			cout << "Sorted Array" << endl;
			sort->print_num(sorted, 6);
			break;
		case 3:
			sort = new SelectionSort;
			cout << "Unsorted Array" << endl;
			sort->print_num(array, 6);
			sorted = sort->sort_numeric(array, 6);
			cout << "Sorted Array" << endl;
			sort->print_num(sorted, 6);
			break;
		default:
			break;

		}
	}
}

void ds() {

	LinkedList::node* head = NULL;

	int ds_type;
	LinkedList* obj = new LinkedList;
	while (true) {

		cout << "LinkedLIst" << endl;
		cout << "1. Add Item at End" << endl;
		cout << "2. Add Item at beginning" << endl;
		cout << "3. Delete item at end" << endl;
		cout << "4. Delete item at beginning" << endl;
		cout << "5. delete item" << endl;
		cout << "6. Reverse" << endl;
		cout << "7. print the list " << endl;
		cin >> ds_type;
		switch (ds_type) {

		case 1: {
			cout << "enter item" << endl;
			string s;
			cin >> s;
			head = obj->insertItemAtEnd(s, head);
			obj->printList(head);
			break;
		}
		case 2: {
			cout << "enter item" << endl;
			string s;
			cin >> s;
			head = obj->insertAtBeginning(s, head);
			obj->printList(head);
			break;
		}
		case 3: {
			obj->deleteAtEnd(head);
			obj->printList(head);
			break;
		}
		case 4: {
			head = obj->deleteAtBeginning(head);
			obj->printList(head);
			break;
		}
		case 5: {
			cout << "enter item to be deleted" << endl;
			string s;
			cin >> s;
			head = obj->deleteItem(head, s);
			obj->printList(head);
			break;
		}
		case 6: {
			head = obj->reverse(head);
			break;
		}
		case 7: {
			obj->printList(head);
			break;
		}
		default:
			return;
		}

	}
}
