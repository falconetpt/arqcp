#include <stdio.h>
#include "random.h"
#include "print_array.h"
#define NUMBER_ELEMENTS 100

int main(void) {
	int vec[NUMBER_ELEMENTS];
	generate_random(vec, NUMBER_ELEMENTS);
	print_array(vec, NUMBER_ELEMENTS);
	return 0;
}
