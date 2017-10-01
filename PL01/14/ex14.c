#include <stdio.h>
#include "frequencies.h"


int main(void) {
	float grades[] = {
		8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67,
		16.23, 18.75
	};
	
	int n = 11;
	int freq[GRADE_SCALE];
	frequencies(grades, n, freq);
	
	//print array
	int i;
	for(i = 0; i < GRADE_SCALE; i++) {
		printf("%d\n", *(freq+i));
	}
	return 0;
}
