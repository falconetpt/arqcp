#include "frequencies.h"

void frequencies(float *grades, int n, int *freq) {
	int i; 
	reset_frequencies(freq, GRADE_SCALE);
	for(i = 0; i < n; i++) {
		int tmp = (int) *(grades+i);
		*(freq+tmp) += 1;
	}
}

void reset_frequencies(int *freq, int n) {
	int i;
	for(i = 0; i < n; i++) {
		*(freq+i) = 0;
	}
}
