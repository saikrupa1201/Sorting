#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include <string>
#include "ISort.h"
using namespace std;
class SelectionSort: public ISort{
public:
//	~SelectionSort();
	int* sort_numeric(const int* array, int size);
	string* sort_alpha(const string* array, int size);
   void print_num(const int* array, int size);
    void print_alpha(const string* array, int size);
};

#endif
