#include <stdio.h>
#include "sort.h"

int main(void) {
	int vec[] = {12,9,1,6,5,8,2,7,8};
	int n = 9;
	array_sort(vec, n);
	
	//prints array
	int i;
	for(i = 0;i< n; i++) {
		printf("%d\n", *(vec+i));
	}
	return 0;
}
