#ifndef ISORT_H
#define ISORT_H

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class ISort{

public:
//	virtual ~ISort();
	virtual int* sort_numeric(const int* array, int size) = 0;
	virtual string* sort_alpha(const string* array, int size) = 0;
	void print_num(const int* array, int size) {
		for (int i = 0; i < size; i++){
		                    cout << array[i] << " ";
		                        }
		            cout << endl;
	}
    void print_alpha(const string* array, int size){
    	for (int i = 0; i < size; i++){
    			                    cout << array[i] << " ";
    			                        }
    			            cout << endl;
    }

};

#endif
