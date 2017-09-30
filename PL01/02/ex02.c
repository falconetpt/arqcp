#include "vector_fill.h"
#define NUMBER_ELEMENTS 20

int main(void) {
	int vec[NUMBER_ELEMENTS];
	fill_vec(vec ,NUMBER_ELEMENTS);
	print_array(vec, NUMBER_ELEMENTS);
	return 0;
}
