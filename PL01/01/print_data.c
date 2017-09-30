#include <stdio.h>

void print_elements(int x, int *xPtr, float y, int *vec) {
	printf("--Value:\n X: %d Y: %f\n", x, y);
	printf("--Address of:\n X: %x XPTR: %x\n", &x, &xPtr);
	printf("--Value Pointed by xPtr: %d\n", *xPtr);
	printf("--Address of:\n vec: %x\n", &vec);
	printf("--Values of vec:\n [0]: %d [1]: %d [2]: %d [3]: %d\n",
			*(vec+0), *(vec+1), *(vec+2), *(vec+3));
	printf("--Address of vec:\n [0]: %x [1]: %x [2]: %x [3]: %x\n",
			(vec+0), (vec+1), (vec+2), (vec+3));
}
