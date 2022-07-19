#include "sort.h"

void bubble_sort(int *array, size_t size){
	int i, j, k, temp;

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
	print("\n");
	print_array(array, size);
}
