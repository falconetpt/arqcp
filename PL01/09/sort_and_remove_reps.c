#include "sort.h"

int sort_without_reps(int *src, int n, int *dest) {
	array_sort(src, n);
	int size = 0;
	int tmp = *(src+0);
	int i;
	
	for(i = 0; i < n; i++) {
		if(i == 0) {
			*(dest+size) = *(src+i);
			size++;
		}
		
		if(*(src+i) != tmp) {
			tmp = *(src+i);
			*(dest+size) = tmp;
			size++;
		}
	}
	return size;
}
