#include <stdio.h>
#include "random.h"
#include "print_array.h"
#include "set_of_three_verification.h"
#define NUMBER_ELEMENTS 100

int main(void) {
	int vec[NUMBER_ELEMENTS];
	generate_random(vec, NUMBER_ELEMENTS);
	
	printf("-- Elements --\n");
	print_array(vec, NUMBER_ELEMENTS);
	
	int number_sets = count_number_sets(vec, NUMBER_ELEMENTS);
	
	printf("\n--\n%d\n", number_sets);	
	return 0;
}
