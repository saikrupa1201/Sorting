#include "../include/InsertionSort.h"
#include <iostream>
using namespace std;


int* InsertionSort::sort_numeric(const int* array, int size) {
		int* temp = (int* )array;

		for (int i = 0; i < size; i++){
			for (int j = i+1; j > 0; j--){
				if(temp[j] < temp[j-1]){
					std:swap(temp[j],temp[j-1]);
				}
			}
		}

		return temp;
	}


string* InsertionSort::sort_alpha(const string* array, int size) {
            string* temp = (string* )array;
                    for (int i = 0; i < size - 1; i++) {
                                    for (int j = i+1; j > 0; j--) {
                                                        if (temp[j].compare(temp[j - 1]) < 0) {
                                                                                std::swap(temp[j], temp[j - 1]);
                                                                                                }
                                                                    }
                                            }

                            return temp;
}

void InsertionSort::print_num(const int* array, int size){

        for (int i = 0; i < size; i++){
                    cout << array[i] << " ";
                        }
            cout << endl;
}

void InsertionSort::print_alpha(const string* array, int size){

	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;

}
