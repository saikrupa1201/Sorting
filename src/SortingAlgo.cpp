//============================================================================
// Name        : SortingAlgo.cpp
// Author      : Saikrupa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../include/ISort.h"
#include "../include/BubbleSort.h"
#include <iostream>
using namespace std;
int main() {

	int sorting_type;

	ISort* sort;
	int* sorted;
	int array[] = {76,92,21,85,12,65};
	string sarray[] = {"Apple", "Merry", "Paint", "Cold", "Bent", "Dean"};

	cout << "Sorting Algorithms" << endl;
	cout << "1. Bubble Sort" << endl;
	cout << "2. Insertion Sort" << endl;
	cout << "Enter sorting type" << endl;

	cin >> sorting_type;


	if(sorting_type < 1 || sorting_type > 1)
		return 0;

	switch(sorting_type){
	case 1:
		sort = new BubbleSort;
		cout<< "Unsorted Array" << endl;
		sort->print_num(array,6);
		sorted = sort->sort_numeric(array, 6);
		cout<< "Sorted Array" << endl;
		sort->print_num(sorted,6);
		break;
	default:
		break;

	}

	return 0;
}
