#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include <string>
#include "ISort.h"
using namespace std;
class InsertionSort: public ISort{
public:
//	~InsertionSort();
	int* sort_numeric(const int* array, int size);
	string* sort_alpha(const string* array, int size);
};

#endif
