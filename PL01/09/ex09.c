#include <stdio.h>
#include "sort_and_remove_reps.h"

int main(void) {
	int src[] = {1,6,3,1,3,7,1,2,6,7,2,6,8,9,7,9};
	int n = 16;
	int dst[n];
	
	int unique_numbers =sort_without_reps(src, n, dst);
	
	//print array
	int i;
	for(i = 0; i < unique_numbers; i++) {
		printf("%d\n", *(dst+i));
	}
	return 0;
}
