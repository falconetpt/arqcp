#include "random.h"

void generate_random(int *vec, int n) {
	int rand_number;
	int i;
	
	for(i = 0; i < n; i++) {
		rand_number = rand() % (MAX_NUM + 1) + MIN_NUM;
		*(vec+i) = rand_number;
	}
}
