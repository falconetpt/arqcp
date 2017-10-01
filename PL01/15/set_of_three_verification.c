#include "set_of_three_verification.h"

int set_verification_ascending(int *vec) {
	int i;
	for(i = 1; i < NUMBERS_TO_CHECK; i++) {
		if(*(vec+i-1) > *(vec+i)) {
			return 0;
		}
	}
	return 1;
}
