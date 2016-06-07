#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class LinkedList{
public:
	struct node {
		string data;
		node* next;
	};

	node* insertItemAtEnd(string data, node* head);
	node* insertAtBeginning(string data, node* head);
	node* deleteAtBeginning(node* head);
	void deleteAtEnd(node* head);
	node* deleteItem(node* head, string data);
	node* reverse(node* head);
	void printList(node* head);

};

#endif
