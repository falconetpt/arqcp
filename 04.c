#include <stdio.h>
#define NUMBER_ELEMENTS 30

void fill_vector(int *vec);
float calculate_mean(int *vec);

int  main(void) {
	int vec[NUMBER_ELEMENTS];
	fill_vector(vec);
	printf("Average: %.2f\n", calculate_mean(vec));
	return 0;
}

float calculate_mean(int *vec) {
	int i;
	int result = 0;
	for(i = 0; i < NUMBER_ELEMENTS; i++) {
		result += vec[i];
	}
	return result * 1.0 / NUMBER_ELEMENTS;
}

void fill_vector(int *vec) {
	int i = 0;
	for(i =0; i < NUMBER_ELEMENTS; i++) {
		printf("Insert Number (%d): ", (i+1));
		scanf("%d", &vec[i]);
	}
}
