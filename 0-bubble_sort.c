#include "sort.h"

void bubble_sort(int *array, size_t size){
	int i, j, k, temp;

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for(k = 0; k < size; k++){
					if(k != size - 1)
						printf("%d, ", array[k]);
					else
						printf("%d\n", array[k]);
				}
			}
		}
	}
	print("\n");
	for(i = 0; i < size; i++){
		if(i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
