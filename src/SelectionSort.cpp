#include "../include/SelectionSort.h"
#include <iostream>
using namespace std;


int* SelectionSort::sort_numeric(const int* array, int size) {
            int* temp = (int* )array;
                    for (int i = 0; i < size; i++) {
                                    for (int j = i+1; j < size; j++) {
                                                        if (temp[i] > temp[j]) {
                                                                                std::swap(temp[i], temp[j]);
                                                                                                }
                                                                    }
                                            }

                            return temp;
                                }


string* SelectionSort::sort_alpha(const string* array, int size) {
            string* temp = (string* )array;
            for (int i = 0; i < size - 1; i++) {
                                                for (int j = i+1; j < size - 1; j++) {
                                                                    if (temp[i].compare(temp[j]) > 0) {
                                                                                            std::swap(temp[i], temp[j]);
                                                                                                            }
                                                                                }
                                                        }

                                        return temp;
}


void SelectionSort::print_num(const int* array, int size){

        for (int i = 0; i < size; i++){
                    cout << array[i] << " ";
                        }
            cout << endl;
}

void SelectionSort::print_alpha(const string* array, int size){

	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;

}
