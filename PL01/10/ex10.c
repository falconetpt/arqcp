#include <stdio.h>
#include "sum_even_elements_array.h"

int main(void) {
	int vec[] = {1,2,3,4,6,8, 12};
	int n = 7;
	printf("%d\n", sum_even_elements(vec, n));
	return 0;
}
