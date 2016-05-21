#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <string>
#include "ISort.h"
using namespace std;
class BubbleSort: public ISort{
public:
//	~BubbleSort();
	int* sort_numeric(const int* array, int size);
	string* sort_alpha(const string* array, int size);
    void print_num(const int* array, int size);
};

#endif
