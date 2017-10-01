#include "set_of_three_verification.h"
 
void increment_number(int *number) {
	*(number) += 1;
}

int count_number_sets(int *vec, int n) {
	int number_sets =0;
	int i;
	for(i = 0; i < n - NUMBERS_TO_CHECK; i++) {
		if(set_verification_ascending((vec+i)) == 1) {
			increment_number(&number_sets);
		}	
	}
	return number_sets;
}
