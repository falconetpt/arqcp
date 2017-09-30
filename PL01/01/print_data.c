#include <stdio.h>

void print_elements(int x, int *xPtr, float y, int *vec) {
	printf("--Value:\n X: %d Y: %f\n", x, y);
	printf("--Address of:\n X: %x XPTR: %x\n", &x, &xPtr);
}
