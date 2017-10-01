#include <stdio.h>

void print_array(int *vec, int n) {
	int i = 0;
	for(i = 0; i < n; i++) {
		printf("%d\n", *(vec + i));
	}
}
