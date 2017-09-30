#include <stdio.h>

void fill_vec(int * vec, int n) {
	int i;
	for(i=0; i < n; i++) {
		printf("Insert an integer number: ");
		scanf("%d", (vec+i));
	}
}
