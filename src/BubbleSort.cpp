#include "../include/BubbleSort.h"
#include <iostream>
using namespace std;


int* BubbleSort::sort_numeric(const int* array, int size) {
            int* temp = (int* )array;
                    for (int i = 0; i < size - 1; i++) {
                                    for (int j = 0; j < size - i - 1; j++) {
                                                        if (temp[j] > temp[j + 1]) {
                                                                                std::swap(temp[j], temp[j + 1]);
                                                                                                }
                                                                    }
                                            }

                            return temp;
                                }


string* BubbleSort::sort_alpha(const string* array, int size) {
            string* temp = (string* )array;
                    for (int i = 0; i < size - 1; i++) {
                                    for (int j = 0; j < size - i - 1; j++) {
                                                        if (temp[j].compare(temp[j + 1]) > 0) {
                                                                                std::swap(temp[j], temp[j + 1]);
                                                                                                }
                                                                    }
                                            }

                            return temp;
}


void BubbleSort::print_num(const int* array, int size){

        for (int i = 0; i < size; i++){
                    cout << array[i] << " ";
                        }
            cout << endl;
}

void BubbleSort::print_alpha(const string* array, int size){

	for (int i = 0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;

}
