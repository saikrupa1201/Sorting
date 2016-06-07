#include <LinkedList.h>

LinkedList::node* LinkedList::insertItemAtEnd(string data, node* head) {

	node* tmp = NULL;

	// If head node is null, list is empty. create head and return
	if (head == NULL) {
		tmp = new node;
		tmp->data = data;
		tmp->next = NULL;
		head = tmp;
		return head;
	}

	tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}

	node* add = new node;
	add->data = data;
	add->next = NULL;
	tmp->next = add;

	return head;
}

LinkedList::node* LinkedList::insertAtBeginning(string data, node* head) {

	node* tmp = NULL;

	if (head == NULL) {
		tmp = new node;
		tmp->data = data;
		tmp->next = NULL;
		head = tmp;
		return head;
	}

	node* add = new node;
	add->data = data;
	add->next = head;

	return add;
}

LinkedList::node* LinkedList::deleteAtBeginning(node* head) {

	if (head == NULL) {
		cout << "Cannot delete empty list" << endl;
		return NULL;
	}

	node* tmp = head->next;
	delete head;
	head = NULL;

	return tmp;

}

void LinkedList::deleteAtEnd(node* head) {

	if (head == NULL) {
		cout << "Cannot delete empty list" << endl;
		return;
	}

	node* tmp;
	while (head->next != NULL) {
		tmp = head;
		head = head->next;
	}
	tmp->next = NULL;
	delete head;
	head = NULL;
}

LinkedList::node* LinkedList::deleteItem(node* head, string data) {

	if (head == NULL) {
		cout << "List is empty" << endl;
		return head;
	}

	node* head1;

	if (head->data == data) {
		head1 = deleteAtBeginning(head);
	} else {

		head1 = head;
		node* tmp;
		while (head->next != NULL) {
			tmp = head;
			head = head->next;
			if (head->data == data) {
				tmp->next = head->next;
				delete head;
				head = NULL;
				break;
			}
		}
	}

	return head1;
}


LinkedList::node* LinkedList::reverse(LinkedList::node* head){

	node* prev = NULL;
	node* curr = head;
	node* next;

	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}


void LinkedList::printList(LinkedList::node* head) {
	LinkedList::node* tmp = head;
	cout << head << endl;

	while (tmp) {

		cout << (tmp->data) << "-->";
		tmp = tmp->next;
	}
	cout << "NULL" << endl;
}
